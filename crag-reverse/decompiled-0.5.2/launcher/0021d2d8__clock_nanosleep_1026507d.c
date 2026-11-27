// 0021d2d8 clock_nanosleep

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_nanosleep(clockid_t __clock_id,int __flags,timespec *__req,timespec *__rem)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


