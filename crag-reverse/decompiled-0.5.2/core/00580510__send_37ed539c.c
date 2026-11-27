// 00580510 send

/* <std[6c98fd8553dbae28]::sync::mpmc::Sender<(serde_json[dc3825464c436029]::value::Value, bool,
   core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>::send
    */

undefined8 * __rustcall
<std[6c98fd8553dbae28]::sync::mpmc::Sender<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>
::send(undefined8 *param_1,longlong *param_2,undefined4 *param_3,undefined8 param_4)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  uint local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  lVar1 = param_2[1];
  if (*param_2 == 0) {
    local_58 = *(undefined8 *)(param_3 + 0xc);
    local_88 = *param_3;
    uStack_84 = param_3[1];
    uStack_80 = param_3[2];
    uStack_7c = param_3[3];
    local_78 = param_3[4];
    uStack_74 = param_3[5];
    uStack_70 = param_3[6];
    uStack_6c = param_3[7];
    local_68 = param_3[8];
    uStack_64 = param_3[9];
    uStack_60 = param_3[10];
    uStack_5c = param_3[0xb];
    uVar3 = <std[6c98fd8553dbae28]::sync::mpmc::array::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>
            ::send(local_48,lVar1,&local_88,param_4,0xffffffff);
  }
  else if ((int)*param_2 == 1) {
    local_58 = *(undefined8 *)(param_3 + 0xc);
    local_88 = *param_3;
    uStack_84 = param_3[1];
    uStack_80 = param_3[2];
    uStack_7c = param_3[3];
    local_78 = param_3[4];
    uStack_74 = param_3[5];
    uStack_70 = param_3[6];
    uStack_6c = param_3[7];
    local_68 = param_3[8];
    uStack_64 = param_3[9];
    uStack_60 = param_3[10];
    uStack_5c = param_3[0xb];
    uVar3 = <std[6c98fd8553dbae28]::sync::mpmc::list::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>
            ::send(local_48,lVar1,&local_88,param_4,0xffffffff);
  }
  else {
    local_58 = *(undefined8 *)(param_3 + 0xc);
    local_88 = *param_3;
    uStack_84 = param_3[1];
    uStack_80 = param_3[2];
    uStack_7c = param_3[3];
    local_78 = param_3[4];
    uStack_74 = param_3[5];
    uStack_70 = param_3[6];
    uStack_6c = param_3[7];
    local_68 = param_3[8];
    uStack_64 = param_3[9];
    uStack_60 = param_3[10];
    uStack_5c = param_3[0xb];
    uVar3 = <std[6c98fd8553dbae28]::sync::mpmc::zero::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>
            ::send(local_48,lVar1,&local_88,param_4,0xffffffff);
  }
  if (local_48[0] == 2) {
    param_1[5] = 0xfffffffffffffffe;
    return param_1;
  }
  if ((local_48[0] & 1) == 0) {
    (*(code *)PTR_panic_00799338)
              (uVar3,&anon_92c4c5dab1af02541b6de8b875afdfcf_38_llvm_8405253652347736786);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  param_1[6] = local_10;
  param_1[4] = local_20;
  param_1[5] = uStack_18;
  param_1[2] = local_30;
  param_1[3] = uStack_28;
  *param_1 = local_40;
  param_1[1] = uStack_38;
  return param_1;
}


