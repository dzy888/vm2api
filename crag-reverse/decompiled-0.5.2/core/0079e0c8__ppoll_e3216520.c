// 0079e0c8 ppoll

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ppoll(pollfd *__fds,nfds_t __nfds,timespec *__timeout,__sigset_t *__ss)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


