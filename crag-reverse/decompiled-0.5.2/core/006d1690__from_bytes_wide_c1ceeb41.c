// 006d1690 from_bytes_wide

/* <curve25519_dalek[8828c522c30c513]::backend::serial::u64::scalar::Scalar52>::from_bytes_wide */

ulonglong * __rustcall
<curve25519_dalek[8828c522c30c513]::backend::serial::u64::scalar::Scalar52>::from_bytes_wide
          (ulonglong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  longlong local_90;
  ulonglong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  ulonglong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  uStack_80 = (ulonglong)(uint5)param_2[1] << 0xc | *param_2 >> 0x34;
  uVar3 = (ulonglong)*(byte *)((longlong)param_2 + 0x13) << 0x18;
  uStack_70 = (ulonglong)(ushort)param_2[3] << 0x24 |
              ((ulonglong)*(ushort *)((longlong)param_2 + 0x16) << 0x30 |
               (ulonglong)*(ushort *)((longlong)param_2 + 0x14) << 0x20 | uVar3) >> 0x1c;
  local_48 = (ulonglong)(uint)param_2[6] << 0x14 |
             ((ulonglong)*(ushort *)((longlong)param_2 + 0x2e) << 0x30 |
             (ulonglong)*(byte *)((longlong)param_2 + 0x2d) << 0x28) >> 0x2c;
  uVar2 = (ulonglong)*(byte *)((longlong)param_2 + 0x3a) << 0x10;
  local_88 = (ulonglong)(uint7)*param_2 & 0xfffffffffffff;
  local_78 = ((ulonglong)((uint)uVar3 | (uint)(uint3)param_2[2]) & 0xfffffff) << 0x18 |
             ((ulonglong)*(ushort *)((longlong)param_2 + 0xe) << 0x30 |
             (ulonglong)*(byte *)((longlong)param_2 + 0xd) << 0x28) >> 0x28;
  local_68 = ((ulonglong)*(ushort *)((longlong)param_2 + 0x1e) << 0x30 |
             (ulonglong)*(ushort *)((longlong)param_2 + 0x1c) << 0x20 |
             (ulonglong)*(ushort *)((longlong)param_2 + 0x1a) << 0x10) >> 0x10 |
             ((ulonglong)(byte)param_2[4] & 0xf) << 0x30;
  local_58 = (CONCAT26(*(ushort *)((longlong)param_2 + 0x26),
                       CONCAT24(*(undefined2 *)((longlong)param_2 + 0x24),
                                (uint)*(ushort *)((longlong)param_2 + 0x22) << 0x10 |
                                (uint)*(byte *)((longlong)param_2 + 0x21) << 8)) |
             (ulonglong)(byte)param_2[4]) >> 4 & 0xfffffffffffff;
  uStack_50 = ((ulonglong)(uint6)param_2[5] & 0xfffffffffff) << 8 |
              (ulonglong)(*(ushort *)((longlong)param_2 + 0x26) >> 8);
  uStack_40 = ((ulonglong)((uint)uVar2 | (uint)(ushort)param_2[7]) & 0xfffff) << 0x20 |
              ((ulonglong)*(ushort *)((longlong)param_2 + 0x36) << 0x30 |
              (ulonglong)*(ushort *)((longlong)param_2 + 0x34) << 0x20) >> 0x20;
  local_38 = ((ulonglong)*(ushort *)((longlong)param_2 + 0x3e) << 0x30 |
              (ulonglong)*(ushort *)((longlong)param_2 + 0x3c) << 0x20 |
              (ulonglong)*(byte *)((longlong)param_2 + 0x3b) << 0x18 | uVar2) >> 0x14;
  montgomery_mul(&local_b0,&local_88,&DAT_001b56c8);
  local_68 = local_90;
  local_78 = CONCAT44(uStack_9c,local_a0);
  uStack_70 = CONCAT44(uStack_94,uStack_98);
  local_88 = local_b0;
  uStack_80 = CONCAT44(uStack_a4,uStack_a8);
  montgomery_mul(&local_b0,&local_58,&DAT_001b56a0);
  uStack_80 = (local_88 + local_b0 >> 0x34) + CONCAT44(uStack_a4,uStack_a8) + uStack_80;
  uVar3 = local_78 + CONCAT44(uStack_9c,local_a0) + (uStack_80 >> 0x34);
  uVar5 = uStack_70 + CONCAT44(uStack_94,uStack_98) + (uVar3 >> 0x34);
  uVar4 = (local_88 + local_b0 & 0xfffffffffffff) + 0xfffd9ce5a30a2c13;
  uVar6 = ((longlong)uVar4 >> 0x3f) + -0xdea2f79cd6581 + (uStack_80 & 0xfffffffffffff);
  uVar3 = ((uVar3 & 0xfffffffffffff) + ((longlong)uVar6 >> 0x3f)) - 0x14def9;
  uVar2 = ((longlong)uVar3 >> 0x3f) + (uVar5 & 0xfffffffffffff);
  lVar1 = ((longlong)uVar2 >> 0x3f) + (local_90 + local_68 + (uVar5 >> 0x34) & 0xfffffffffffff) +
          -0x100000000000;
  uVar5 = lVar1 >> 0x3f;
  uVar4 = (uVar5 & 0x2631a5cf5d3ed) + (uVar4 & 0xfffffffffffff);
  uVar6 = (uVar5 & 0xdea2f79cd6581) + (uVar4 >> 0x34) + (uVar6 & 0xfffffffffffff);
  uVar3 = (ulonglong)((uint)(lVar1 >> 0x3f) & 0x14def9) +
          (uVar6 >> 0x34) + (uVar3 & 0xfffffffffffff);
  uVar2 = (uVar3 >> 0x34) + (uVar2 & 0xfffffffffffff);
  *param_1 = uVar4 & 0xfffffffffffff;
  param_1[1] = uVar6 & 0xfffffffffffff;
  param_1[2] = uVar3 & 0xfffffffffffff;
  param_1[3] = uVar2 & 0xfffffffffffff;
  param_1[4] = (uVar5 & 0x100000000000) + lVar1 + (uVar2 >> 0x34) & 0xfffffffffffff;
  return param_1;
}


