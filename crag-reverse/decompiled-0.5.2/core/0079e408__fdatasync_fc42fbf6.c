// 0079e408 fdatasync

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fdatasync(int __fildes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


