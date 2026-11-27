// 003941d0 poll

/* <tokio[d7d91d38da47d894]::io::util::read_exact::ReadExact<tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream>
   as core[c0acaeba6ab4c2e0]::future::future::Future>::poll */

undefined1  [16] __rustcall
<tokio[d7d91d38da47d894]::io::util::read_exact::ReadExact<tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream>as_core[c0acaeba6ab4c2e0]::future::future::Future>
::poll(longlong param_1)

{
  undefined *puVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auVar9 [16];
  
  puVar1 = PTR_poll_read_00799788;
  uVar8 = *(ulonglong *)(param_1 + 0x10);
  lVar7 = uVar8 - *(longlong *)(param_1 + 0x18);
  if (lVar7 != 0) {
    do {
      uVar4 = param_1 + 8;
      lVar3 = (*(code *)puVar1)();
      if (lVar3 == 1) {
        uVar5 = 2;
        goto LAB_003942ee;
      }
      if (uVar4 == 0) {
        uVar4 = *(ulonglong *)(param_1 + 0x10);
        uVar8 = *(ulonglong *)(param_1 + 0x18);
        lVar3 = uVar4 - uVar8;
        if (lVar3 == lVar7) {
          uVar4 = (*(code *)PTR_eof_00799790)();
          goto LAB_003942e9;
        }
        goto LAB_0039421e;
      }
      uVar6 = (uint)uVar4 & 3;
      switch(uVar6) {
      case 0:
        cVar2 = *(char *)(uVar4 + 0x10);
        break;
      case 1:
        cVar2 = *(char *)(uVar4 + 0x1f);
        break;
      case 2:
        lVar7 = (*(code *)PTR_get_os_functions_007992e0)();
        cVar2 = (**(code **)(lVar7 + 8))();
        goto joined_r0x00394297;
      case 3:
        cVar2 = (char)(uVar4 >> 0x20);
joined_r0x00394297:
        if (cVar2 == '#') goto LAB_003942a4;
        goto LAB_003942e9;
      }
      if (cVar2 != '#') {
LAB_003942e9:
        uVar5 = 1;
        uVar8 = uVar4;
        goto LAB_003942ee;
      }
LAB_003942a4:
      if ((1 < uVar6 - 2) && ((uVar4 & 3) != 0)) {
        (*(code *)PTR_drop_00799040)();
      }
      uVar4 = *(ulonglong *)(param_1 + 0x10);
      uVar8 = *(ulonglong *)(param_1 + 0x18);
      lVar3 = uVar4 - uVar8;
LAB_0039421e:
      lVar7 = lVar3;
    } while (uVar4 != uVar8);
  }
  uVar5 = 0;
LAB_003942ee:
  auVar9._8_8_ = uVar8;
  auVar9._0_8_ = uVar5;
  return auVar9;
}


