// 006de230 try_read_output

/* <tokio[d7d91d38da47d894]::runtime::task::harness::Harness<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<(&str,
   u16) as
   tokio[d7d91d38da47d894]::net::addr::sealed::ToSocketAddrsPriv>::to_socket_addrs::{closure#0}>,
   tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>::try_read_output
   <tokio[d7d91d38da47d894]::runtime::task::harness::Harness<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<str
   as tokio[d7d91d38da47d894]::net::addr::sealed::ToSocketAddrsPriv>::to_socket_addrs::{closure#0}>,
   tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>::try_read_output */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::task::harness::Harness<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<(&str,u16)as_tokio[d7d91d38da47d894]::net::addr::sealed::ToSocketAddrsPriv>::to_socket_addrs::{closure#0}>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>
::try_read_output(longlong param_1,int *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  
  cVar8 = (*(code *)PTR_can_read_output_00799fb0)();
  if (cVar8 != '\0') {
    iVar3 = *(int *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x38) = 2;
    if (iVar3 != 1) {
      (*(code *)PTR_panic_fmt_007991a8)
                (iVar3,&anon_ed7a93e299c08851dbd4cf71f9567ab8_2_llvm_1953046205626171361);
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    uVar6 = *(undefined8 *)(param_1 + 0x50);
    uVar7 = *(undefined8 *)(param_1 + 0x58);
    if (*param_2 != 2) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::result::Result<alloc[12e961f32105355]::vec::into_iter::IntoIter<core[c0acaeba6ab4c2e0]::net::socket_addr::SocketAddr>,core[c0acaeba6ab4c2e0]::io::error::Error>,tokio[d7d91d38da47d894]::runtime::task::error::JoinError>>
                (param_2,param_1 + 0x68);
    }
    *(undefined8 *)(param_2 + 8) = uVar1;
    *(undefined8 *)(param_2 + 4) = uVar6;
    *(undefined8 *)(param_2 + 6) = uVar7;
    *(undefined8 *)param_2 = uVar4;
    *(undefined8 *)(param_2 + 2) = uVar5;
  }
  return;
}


