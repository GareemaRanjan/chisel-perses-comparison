FROM debian:buster

RUN apt-get update && apt-get install -y software-properties-common wget gnupg
RUN wget -O - https://apt.llvm.org/llvm-snapshot.gpg.key | apt-key add -
RUN apt-add-repository "deb http://apt.llvm.org/buster/ llvm-toolchain-buster-8 main" && apt-get update
RUN apt-get install -y clang-8 libclang-8-dev llvm-8-dev cmake git wget vim
RUN apt-get install -y libspdlog-dev nlohmann-json-dev
RUN apt-get install -y libmlpack-dev
RUN ln -s /usr/bin/clang-8 /usr/bin/clang && ln -s /usr/bin/llvm-config-8 /usr/bin/llvm-config

# RUN git clone https://github.com/aspire-project/chisel
RUN mkdir chisel
RUN mkdir chiselbench
COPY chisel ./chisel

# RUN git clone https://github.com/aspire-project/chiselbench

RUN mkdir -p chisel/build && cd chisel/build && CXX=clang cmake .. && make
COPY chiselbench ./chiselbench
ENV PATH /usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/chisel/build/bin
ENV CC clang
ENV CHISEL_BENCHMARK_HOME /chiselbench
WORKDIR chiselbench/benchmark
RUN mkdir mycode
RUN mkdir mycode/merged
WORKDIR mycode/merged
# RUN mkdir /chiselbench/benchmark/mycode/merged
# WORKDIR /chiselbench/benchmark/mycode/merged
COPY Makefile mycode.c mycode.c.origin.c test.sh .
RUN chmod +x test.sh
COPY start.sh .
ENTRYPOINT ["sh", "start.sh"]
# chisel ./test.sh bzip2-1.0.5.c
