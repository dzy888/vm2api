// 0079e378 posix_spawnp

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int posix_spawnp(pid_t *__pid,char *__file,posix_spawn_file_actions_t *__file_actions,
                posix_spawnattr_t *__attrp,char **__argv,char **__envp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


