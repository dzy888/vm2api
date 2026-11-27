// 0005e2e0 <agy_bridge[64a9e9deac6c45ce]::protocol::RingSubmitMeta>

/* agy_bridge[64a9e9deac6c45ce]::protocol::unpack_ring_envelope::<agy_bridge[64a9e9deac6c45ce]::protocol::RingSubmitMeta>
    */

longlong * __rustcall
agy_bridge[64a9e9deac6c45ce]::protocol::unpack_ring_envelope::
<agy_bridge[64a9e9deac6c45ce]::protocol::RingSubmitMeta>
          (longlong *param_1,uint *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined4 uVar2;
  uint *local_b8;
  ulonglong local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  longlong *local_90;
  longlong lStack_88;
  longlong local_80;
  longlong lStack_78;
  longlong local_70;
  longlong lStack_68;
  longlong local_60;
  longlong lStack_58;
  longlong local_50;
  longlong lStack_48;
  longlong local_40;
  longlong lStack_38;
  longlong local_30;
  longlong lStack_28;
  
  if (3 < param_3) {
    local_b0 = (ulonglong)*param_2;
    uVar1 = local_b0 + 4;
    if (uVar1 <= param_3) {
      local_b8 = param_2 + 1;
      local_a8 = 0;
      uStack_a0 = 0;
      uVar2 = serde_json[dc3825464c436029]::de::from_trait::
              <serde_json[dc3825464c436029]::read::SliceRead,agy_bridge[64a9e9deac6c45ce]::protocol::RingSubmitMeta>
                        (&local_98,&local_b8);
      if (local_98 != -1) {
        param_1[0xd] = local_30;
        param_1[0xe] = lStack_28;
        param_1[0xb] = local_40;
        param_1[0xc] = lStack_38;
        param_1[9] = local_50;
        param_1[10] = lStack_48;
        param_1[7] = local_60;
        param_1[8] = lStack_58;
        param_1[5] = local_70;
        param_1[6] = lStack_68;
        param_1[3] = local_80;
        param_1[4] = lStack_78;
        param_1[1] = (longlong)local_90;
        param_1[2] = lStack_88;
        *param_1 = local_98;
        param_1[0xf] = (longlong)param_2 + uVar1;
        param_1[0x10] = param_3 - uVar1;
        return param_1;
      }
      if (*local_90 == 1) {
        uVar1 = local_90[1];
        if ((1 < ((uint)uVar1 & 3) - 2) && ((uVar1 & 3) != 0)) {
          local_b0 = uVar1 - 1;
          local_b8 = (uint *)CONCAT71(local_b8._1_7_,3);
          uVar2 = (*(code *)PTR_drop_000c3ae0)();
        }
      }
      else if ((*local_90 == 0) && (local_90[2] != 0)) {
        uVar2 = (*(code *)PTR___rust_dealloc_000c3aa0)(0xffffffffffffffff,1);
      }
      (*(code *)PTR___rust_dealloc_000c3aa0)(uVar2,8);
      *param_1 = -1;
      return param_1;
    }
  }
  *param_1 = -1;
  return param_1;
}


