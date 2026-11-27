// 005d3d30 disconnect_receivers

/* <std[6c98fd8553dbae28]::sync::mpmc::array::Channel<(serde_json[dc3825464c436029]::value::Value,
   bool, 
   core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>::disconnect_receivers
    */

undefined8 __rustcall
<std[6c98fd8553dbae28]::sync::mpmc::array::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>
::disconnect_receivers(ulonglong *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  bool bVar11;
  
  uVar3 = param_1[0x10];
  do {
    LOCK();
    uVar1 = param_1[0x10];
    bVar11 = uVar3 == uVar1;
    if (bVar11) {
      param_1[0x10] = uVar3 | param_1[0x32];
    }
    else {
      uVar3 = uVar1;
    }
    UNLOCK();
  } while (!bVar11);
  uVar1 = param_1[0x32];
  uVar9 = uVar1;
  if ((uVar1 & uVar3) == 0) {
    <std[6c98fd8553dbae28]::sync::mpmc::waker::SyncWaker>::disconnect(param_1 + 0x20);
    uVar9 = param_1[0x32];
  }
  uVar6 = ~uVar9;
  uVar7 = 0;
  uVar8 = *param_1;
  do {
    while( true ) {
      uVar4 = uVar9 - 1 & uVar8;
      uVar9 = *(ulonglong *)(param_1[0x33] + uVar4 * 0x40);
      if (uVar8 + 1 != uVar9) break;
      if (param_1[0x30] <= uVar4 + 1) {
        uVar9 = (uVar8 & -param_1[0x31]) + param_1[0x31];
      }
      lVar10 = param_1[0x33] + uVar4 * 0x40;
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                (lVar10 + 8);
      uVar8 = uVar9;
      if (*(int *)(lVar10 + 0x30) == -1) {
        uVar9 = param_1[0x32];
      }
      else {
        <std[6c98fd8553dbae28]::sync::mpmc::Sender<()>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::
        drop(lVar10 + 0x30);
        uVar9 = param_1[0x32];
      }
    }
    if ((uVar6 & uVar3) == uVar8) {
      return CONCAT71((int7)(uVar4 >> 8),(uVar1 & uVar3) == 0);
    }
    if (uVar7 < 7) {
      if (uVar7 != 0) {
        uVar5 = uVar7 * uVar7;
        uVar2 = uVar5 & 5;
        if (7 < uVar5) {
          uVar5 = uVar5 & 0x38;
          do {
            uVar5 = uVar5 - 8;
          } while (uVar5 != 0);
          if (uVar2 == 0) goto LAB_005d3db6;
        }
        do {
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
    }
    else {
      (*(code *)PTR_yield_now_00799b28)();
    }
LAB_005d3db6:
    uVar7 = uVar7 + 1;
    uVar9 = param_1[0x32];
  } while( true );
}


