// 005f7150 poll

/* <tokio[d7d91d38da47d894]::io::util::write_all::WriteAll<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>
   as core[c0acaeba6ab4c2e0]::future::future::Future>::poll */

undefined8 __rustcall
<tokio[d7d91d38da47d894]::io::util::write_all::WriteAll<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>as_core[c0acaeba6ab4c2e0]::future::future::Future>
::poll(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined *puVar3;
  char cVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  
  puVar3 = PTR_poll_write_00799a28;
  lVar5 = *(longlong *)(param_1 + 0x10);
  do {
    if (lVar5 == 0) {
      return 0;
    }
    uVar6 = *(ulonglong *)(param_1 + 8);
    lVar5 = (*(code *)puVar3)();
    if (lVar5 == 2) {
      return 1;
    }
    while (lVar5 == 1) {
      uVar7 = (uint)uVar6 & 3;
      switch(uVar7) {
      case 0:
        if (*(char *)(uVar6 + 0x10) != '#') {
          return 0;
        }
        goto LAB_005f7229;
      case 1:
        cVar4 = *(char *)(uVar6 + 0x1f);
        break;
      case 2:
        lVar5 = (*(code *)PTR_get_os_functions_007992e0)();
        cVar4 = (**(code **)(lVar5 + 8))();
        break;
      case 3:
        cVar4 = (char)(uVar6 >> 0x20);
      }
      if (cVar4 != '#') {
        return 0;
      }
LAB_005f7229:
      if ((1 < uVar7 - 2) && ((uVar6 & 3) != 0)) {
        (*(code *)PTR_drop_00799040)();
      }
      uVar6 = *(ulonglong *)(param_1 + 8);
      lVar5 = (*(code *)puVar3)(*(undefined8 *)(param_1 + 0x10));
      if (lVar5 == 2) {
        return 1;
      }
    }
    lVar1 = *(longlong *)(param_1 + 8);
    uVar2 = *(ulonglong *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 8) = 1;
    *(undefined8 *)(param_1 + 0x10) = 0;
    lVar5 = uVar2 - uVar6;
    if (uVar2 < uVar6) {
      (*(code *)PTR_panic_fmt_007991a8)
                (lVar5,&anon_30b5cef53457a6ea696e8d7e9f6273d6_701_llvm_8436237269785592069);
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::io::error::Error>(uVar6,0x13)
      ;
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume();
    }
    *(ulonglong *)(param_1 + 8) = lVar1 + uVar6;
    *(longlong *)(param_1 + 0x10) = lVar5;
    if (uVar6 == 0) {
      return 0;
    }
  } while( true );
}


