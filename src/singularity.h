/* 
 * Copyright (c) 2015-2016, Gregory M. Kurtzer. All rights reserved.
 * 
 * “Singularity” Copyright (c) 2016, The Regents of the University of California,
 * through Lawrence Berkeley National Laboratory (subject to receipt of any
 * required approvals from the U.S. Dept. of Energy).  All rights reserved.
 * 
 * This software is licensed under a customized 3-clause BSD license.  Please
 * consult LICENSE file distributed with the sources of this project regarding
 * your rights to use or distribute this software.
 * 
 * NOTICE.  This Software was developed under funding from the U.S. Department of
 * Energy and the U.S. Government consequently retains certain rights. As such,
 * the U.S. Government has been granted for itself and others acting on its
 * behalf a paid-up, nonexclusive, irrevocable, worldwide license in the Software
 * to reproduce, distribute copies to the public, prepare derivative works, and
 * perform publicly and display publicly, and to permit other to do so. 
 * 
*/


#ifndef __SINGULARITY_H_
#define __SINGULARITY_H_


    extern int singularity_ns_unshare(void);
    extern int singularity_ns_pid_unshare(void);
    extern int singularity_ns_mnt_unshare(void);
    extern int singularity_ns_join(pid_t attach_pid);

    extern int singularity_rootfs_init(char *source, char *mount_point);
    extern int singularity_rootfs_mount(void);
    extern int singularity_rootfs_chroot(void);
    extern char *singularity_rootfs_dir(void);

    extern int singularity_action_init(void);
    extern int singularity_action_do(int agc, char **argv);

    extern int singularity_mount_kernelfs(void);
    extern int singularity_mount_binds(void);
    extern int singularity_mount_home(void);

    extern int singularity_file_create(void);
    extern int singularity_file_bind(void);

#endif /* __SINGULARITY_H */
