#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/izzat/Desktop/FYP-Drone/mavros_catkin/src/mavros/mavros"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/izzat/Desktop/FYP-Drone/mavros_catkin/install/lib/python3/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/izzat/Desktop/FYP-Drone/mavros_catkin/install/lib/python3/dist-packages:/home/izzat/Desktop/FYP-Drone/mavros_catkin/build/mavros/lib/python3/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/izzat/Desktop/FYP-Drone/mavros_catkin/build/mavros" \
    "/usr/bin/python3" \
    "/home/izzat/Desktop/FYP-Drone/mavros_catkin/src/mavros/mavros/setup.py" \
     \
    build --build-base "/home/izzat/Desktop/FYP-Drone/mavros_catkin/build/mavros" \
    install \
    --root="${DESTDIR-/}" \
    --install-layout=deb --prefix="/home/izzat/Desktop/FYP-Drone/mavros_catkin/install" --install-scripts="/home/izzat/Desktop/FYP-Drone/mavros_catkin/install/bin"
