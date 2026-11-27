// 00543cf0 extract_assistant_from_sse

/* craggemini_core[66f3c71560d70857]::resume::extract_assistant_from_sse */

undefined8 __rustcall
craggemini_core[66f3c71560d70857]::resume::extract_assistant_from_sse
          (undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined7 uStack_9f;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
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
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_100 = 0;
  uStack_f8 = 1;
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 8;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 8;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 8;
  local_a8 = 0;
  local_a0 = 0;
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      <craggemini_core[66f3c71560d70857]::resume::AssistantAccumulator>::feed_sse_frame
                (&local_100,*(undefined8 *)(param_2 + 8 + lVar1),
                 *(undefined8 *)(param_2 + 0x10 + lVar1));
      lVar1 = lVar1 + 0x18;
    } while (param_3 * 0x18 != lVar1);
  }
  local_38 = CONCAT71(uStack_9f,local_a0);
  local_48 = local_b0;
  local_40 = local_a8;
  local_58 = local_c0;
  uStack_50 = uStack_b8;
  local_68 = (undefined4)uStack_d0;
  uStack_64 = uStack_d0._4_4_;
  uStack_60 = (undefined4)uStack_c8;
  uStack_5c = uStack_c8._4_4_;
  local_78 = (undefined4)local_e0;
  uStack_74 = local_e0._4_4_;
  uStack_70 = (undefined4)uStack_d8;
  uStack_6c = uStack_d8._4_4_;
  local_88 = (undefined4)local_f0;
  uStack_84 = local_f0._4_4_;
  uStack_80 = (undefined4)uStack_e8;
  uStack_7c = uStack_e8._4_4_;
  local_98 = (undefined4)local_100;
  uStack_94 = local_100._4_4_;
  uStack_90 = (undefined4)uStack_f8;
  uStack_8c = uStack_f8._4_4_;
  <craggemini_core[66f3c71560d70857]::resume::AssistantAccumulator>::finish(param_1,&local_98);
  return param_1;
}


