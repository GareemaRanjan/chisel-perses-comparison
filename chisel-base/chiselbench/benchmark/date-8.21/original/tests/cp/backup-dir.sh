#!/bin/sh
# Ensure that cp -b doesn't back up directories.

# Copyright (C) 2006-2013 Free Software Foundation, Inc.

# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.

# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.

# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.

. "${srcdir=.}/tests/init.sh"; path_prepend_ ./src
print_ver_ cp

mkdir x y || framework_failure_


cp -a x y || fail=1

# This would mistakenly create a backup of y/x (y/x~) in coreutils-6.3.
cp -ab x y || fail=1
test -d y/x || fail=1
test -d y/x~ && fail=1

Exit $fail