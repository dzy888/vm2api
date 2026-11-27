// 0047d970 push_frame

/* <http_body_util[89f9933de382700b]::collected::Collected<bytes[e9829e187354639b]::bytes::Bytes>>::push_frame
    */

void __rustcall
<http_body_util[89f9933de382700b]::collected::Collected<bytes[e9829e187354639b]::bytes::Bytes>>::
push_frame(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong local_88;
  longlong local_80;
  longlong lStack_78;
  longlong local_70;
  longlong lStack_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  longlong local_30;
  
  local_88 = *param_2;
  if (local_88 == -1) {
    lVar1 = param_2[1];
    lVar2 = param_2[2];
    lVar3 = param_2[3];
    lVar4 = param_2[4];
    if (lVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0047daaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar1 + 0x20))(param_4,0);
      return;
    }
    uVar8 = param_1[0xc];
    uVar6 = param_1[0xf];
    if (uVar6 == uVar8) {
      (*(code *)PTR_grow_00799750)();
      uVar8 = param_1[0xc];
      uVar6 = param_1[0xf];
    }
    param_1[0xf] = uVar6 + 1;
    uVar9 = 0;
    if (uVar8 <= uVar6 + param_1[0xe]) {
      uVar9 = uVar8;
    }
    lVar5 = param_1[0xd];
    lVar7 = ((uVar6 + param_1[0xe]) - uVar9) * 0x20;
    *(longlong *)(lVar5 + lVar7) = lVar1;
    *(longlong *)(lVar5 + 8 + lVar7) = lVar2;
    *(longlong *)(lVar5 + 0x10 + lVar7) = lVar3;
    *(longlong *)(lVar5 + 0x18 + lVar7) = lVar4;
  }
  else {
    local_80 = param_2[1];
    lStack_78 = param_2[2];
    local_70 = param_2[3];
    lStack_68 = param_2[4];
    local_30 = param_2[0xb];
    local_60 = (undefined4)param_2[5];
    uStack_5c = *(undefined4 *)((longlong)param_2 + 0x2c);
    uStack_58 = (undefined4)param_2[6];
    uStack_54 = *(undefined4 *)((longlong)param_2 + 0x34);
    local_50 = (undefined4)param_2[7];
    uStack_4c = *(undefined4 *)((longlong)param_2 + 0x3c);
    uStack_48 = (undefined4)param_2[8];
    uStack_44 = *(undefined4 *)((longlong)param_2 + 0x44);
    local_40 = (undefined4)param_2[9];
    uStack_3c = *(undefined4 *)((longlong)param_2 + 0x4c);
    uStack_38 = (undefined4)param_2[10];
    uStack_34 = *(undefined4 *)((longlong)param_2 + 0x54);
    if ((int)*param_1 == -1) {
      *param_1 = local_88;
      lVar1 = param_2[2];
      lVar2 = param_2[3];
      lVar3 = param_2[4];
      param_1[1] = param_2[1];
      param_1[2] = lVar1;
      param_1[3] = lVar2;
      param_1[4] = lVar3;
      lVar1 = param_2[6];
      lVar2 = param_2[7];
      lVar3 = param_2[8];
      lVar4 = param_2[9];
      lVar5 = param_2[10];
      param_1[5] = param_2[5];
      param_1[6] = lVar1;
      param_1[7] = lVar2;
      param_1[8] = lVar3;
      param_1[9] = lVar4;
      param_1[10] = lVar5;
      param_1[0xb] = param_2[0xb];
    }
    else {
      <http[56314f485c23ccf6]::header::map::HeaderMap_as_core[c0acaeba6ab4c2e0]::iter::traits::collect::Extend<(core[c0acaeba6ab4c2e0]::option::Option<http[56314f485c23ccf6]::header::name::HeaderName>,http[56314f485c23ccf6]::header::value::HeaderValue)>>
      ::extend::<http[56314f485c23ccf6]::header::map::HeaderMap>(param_1,&local_88);
    }
  }
  return;
}


