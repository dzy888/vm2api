// 001ddb60 lazy_init

/* WARNING: Removing unreachable block (ram,0x001ddbb7) */
/* WARNING: Removing unreachable block (ram,0x001ddbbb) */
/* WARNING: Removing unreachable block (ram,0x001ddbc6) */
/* WARNING: Removing unreachable block (ram,0x001ddbd2) */
/* <std[6c98fd8553dbae28]::sys::thread_local::key::racy::LazyKey>::lazy_init */

undefined8 __rustcall
<std[6c98fd8553dbae28]::sys::thread_local::key::racy::LazyKey>::lazy_init(void)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_11;
  
  iVar2 = (*(code *)PTR_pthread_key_create_0021a910)();
  if ((iVar2 == 0) && (iVar2 = (*(code *)PTR_pthread_key_create_0021a910)(), iVar2 == 0)) {
    (*(code *)PTR_pthread_key_delete_0021a918)();
  }
  else {
    uVar3 = <std[6c98fd8553dbae28]::sys::stdio::unix::Stderr_as_std[6c98fd8553dbae28]::io::Write>::
            write_fmt(&local_11,"fatal runtime error: out of TLS keys, aborting\n",0x5f);
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::io::error::Error>>(uVar3);
    (*(code *)PTR_abort_00219ea8)();
  }
  uVar3 = <std[6c98fd8553dbae28]::sys::stdio::unix::Stderr_as_std[6c98fd8553dbae28]::io::Write>::
          write_fmt(&local_11,&DAT_0012e638,0x9b);
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
  <core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::io::error::Error>>(uVar3);
  (*(code *)PTR_abort_00219ea8)();
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return uVar3;
}


