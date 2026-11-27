// 0070fa50 wake

/* WARNING: Type propagation algorithm not settling */
/* <mio[4b4dae02747c797f]::sys::unix::waker::Waker>::wake */

ulonglong __rustcall <mio[4b4dae02747c797f]::sys::unix::waker::Waker>::wake(undefined8 param_1)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_38 = 1;
  uVar3 = 8;
  local_30 = param_1;
  lVar2 = (*(code *)PTR_write_0079a958)();
  if (lVar2 != 1) {
    return 0;
  }
  uVar5 = (uint)uVar3 & 3;
  switch(uVar5) {
  case 0:
    cVar1 = *(char *)(uVar3 + 0x10);
    break;
  case 1:
    cVar1 = *(char *)(uVar3 + 0x1f);
    break;
  case 2:
    lVar2 = (*(code *)PTR_get_os_functions_007992e0)();
    cVar1 = (**(code **)(lVar2 + 8))();
    break;
  case 3:
    cVar1 = (char)(uVar3 >> 0x20);
  }
  if (cVar1 != '\r') {
    return uVar3;
  }
  local_48 = 0;
  uVar4 = 8;
  lVar2 = (*(code *)PTR_read_007999e0)();
  if (lVar2 == 1) {
    uVar6 = (uint)uVar4 & 3;
    switch(uVar6) {
    case 0:
      cVar1 = *(char *)(uVar4 + 0x10);
      break;
    case 1:
      cVar1 = *(char *)(uVar4 + 0x1f);
      break;
    case 2:
      lVar2 = (*(code *)PTR_get_os_functions_007992e0)();
      cVar1 = (**(code **)(lVar2 + 8))();
      break;
    case 3:
      cVar1 = (char)(uVar4 >> 0x20);
    }
    if (cVar1 != '\r') goto joined_r0x0070fb95;
    if ((1 < uVar6 - 2) && ((uVar4 & 3) != 0)) {
      local_40 = uVar4 - 1;
      local_48._1_7_ = (undefined7)((ulonglong)local_48 >> 8);
      local_48 = CONCAT71(local_48._1_7_,3);
      (*(code *)PTR_drop_00799040)();
    }
  }
  uVar4 = wake(param_1,&local_48);
joined_r0x0070fb95:
  if ((1 < uVar5 - 2) && ((uVar3 & 3) != 0)) {
    local_40 = uVar3 - 1;
    local_48._1_7_ = (undefined7)((ulonglong)local_48 >> 8);
    local_48 = CONCAT71(local_48._1_7_,3);
    (*(code *)PTR_drop_00799040)();
  }
  return uVar4;
}


