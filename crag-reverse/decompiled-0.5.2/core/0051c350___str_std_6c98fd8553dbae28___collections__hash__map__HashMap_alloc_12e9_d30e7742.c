// 0051c350 <str,std[6c98fd8553dbae28]::collections::hash::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::pool::AccountCooldownRecord>>

/* <serde_json[dc3825464c436029]::ser::Compound<&mut alloc[12e961f32105355]::vec::Vec<u8>,
   serde_json[dc3825464c436029]::ser::PrettyFormatter> as
   serde_core[48776c27239fa21f]::ser::SerializeMap>::serialize_entry::<str,
   std[6c98fd8553dbae28]::collections::hash::map::HashMap<alloc[12e961f32105355]::string::String,
   craggemini_core[66f3c71560d70857]::pool::AccountCooldownRecord>> */

longlong __rustcall
<serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::PrettyFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
::serialize_entry::
<str,std[6c98fd8553dbae28]::collections::hash::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::pool::AccountCooldownRecord>>
          (char *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  bool bVar6;
  longlong lVar7;
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  longlong *unaff_R14;
  uint uVar10;
  longlong lVar11;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar12;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar13 [16];
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_04;
  longlong *local_78;
  undefined8 *local_58;
  longlong local_40;
  
  if (*param_1 == '\x01') {
    lVar11 = 0x28;
    (*(code *)PTR_panic_00799338)
              (param_4,&anon_ec7f14c74815bf4c93b295cfd0665412_164_llvm_7806621557641746444);
  }
  else {
    local_78 = *(longlong **)(param_1 + 8);
    plVar1 = (longlong *)*local_78;
    if (param_1[1] == '\x01') {
      lVar11 = plVar1[2];
      if (*plVar1 == lVar11) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(plVar1,lVar11,1,1,1);
        lVar11 = plVar1[2];
      }
      *(undefined1 *)(plVar1[1] + lVar11) = 10;
      lVar11 = lVar11 + 1;
    }
    else {
      lVar11 = plVar1[2];
      if ((ulonglong)(*plVar1 - lVar11) < 2) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(plVar1,lVar11,2,1,1);
        lVar11 = plVar1[2];
      }
      *(undefined2 *)(plVar1[1] + lVar11) = 0xa2c;
      lVar11 = lVar11 + 2;
    }
    plVar1[2] = lVar11;
    puVar5 = PTR_memcpy_00799008;
    lVar7 = local_78[3];
    if (lVar7 != 0) {
      uVar2 = local_78[2];
      if (uVar2 == 0) {
        plVar1[2] = lVar11;
      }
      else {
        do {
          if ((ulonglong)(*plVar1 - lVar11) < uVar2) {
            <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
            <alloc[12e961f32105355]::alloc::Global>(plVar1,lVar11,uVar2,1,1);
            lVar11 = plVar1[2];
          }
          (*(code *)puVar5)();
          lVar11 = lVar11 + uVar2;
          plVar1[2] = lVar11;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
    }
    param_1[1] = '\x02';
    serde_json[dc3825464c436029]::ser::format_escaped_str::
    <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::PrettyFormatter>
              (local_78);
    unaff_R14 = (longlong *)*local_78;
    lVar11 = unaff_R14[2];
    local_58 = param_4;
    if (1 < (ulonglong)(*unaff_R14 - lVar11)) goto LAB_0051c483;
  }
  <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
  <alloc[12e961f32105355]::alloc::Global>(unaff_R14,lVar11,2,1,1);
  lVar11 = unaff_R14[2];
LAB_0051c483:
  *(undefined2 *)(unaff_R14[1] + lVar11) = 0x203a;
  unaff_R14[2] = lVar11 + 2;
  pauVar9 = (undefined1 (*) [16])*local_58;
  local_40 = local_58[3];
  auVar13 = *pauVar9;
  plVar1 = (longlong *)*local_78;
  lVar11 = local_78[3];
  local_78[3] = lVar11 + 1;
  *(undefined1 *)(local_78 + 4) = 0;
  lVar7 = plVar1[2];
  if (*plVar1 == lVar7) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(plVar1,lVar7,1,1,1);
    lVar7 = plVar1[2];
  }
  *(undefined1 *)(plVar1[1] + lVar7) = 0x7b;
  lVar7 = lVar7 + 1;
  plVar1[2] = lVar7;
  if (local_40 == 0) {
    local_78[3] = lVar11;
    if (*plVar1 == lVar7) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(plVar1,lVar7,1,1,1);
      lVar7 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar7) = 0x7d;
    plVar1[2] = lVar7 + 1;
  }
  else {
    uVar10 = ~(uint)(ushort)((ushort)(SUB161(auVar13 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar13 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar13 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar13 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar13 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar13 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar13 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar13 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar13 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar13 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar13 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar13 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar13 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar13 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar13[0xf] >> 7) << 0xf);
    pauVar8 = pauVar9 + 1;
    bVar6 = true;
    do {
      if ((short)uVar10 == 0) {
        do {
          auVar13 = *pauVar8;
          pauVar9 = pauVar9 + -0x80;
          pauVar8 = pauVar8 + 1;
          uVar10 = (ushort)((ushort)(SUB161(auVar13 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar13 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar13 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar13 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar13 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar13 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar13 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar13 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar13 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar13 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar13 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar13 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar13 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar13 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar13[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar10 == 0);
      }
      iVar3 = 0;
      for (uVar4 = uVar10; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
        iVar3 = iVar3 + 1;
      }
      plVar1 = (longlong *)*local_78;
      if (bVar6) {
        lVar11 = plVar1[2];
        if (*plVar1 == lVar11) {
          auVar13._0_8_ =
               <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
               <alloc[12e961f32105355]::alloc::Global>(plVar1,lVar11,1,1,1);
          auVar13._8_8_ = extraout_XMM0_Qb_01;
          lVar11 = plVar1[2];
        }
        *(undefined1 *)(plVar1[1] + lVar11) = 10;
        lVar11 = lVar11 + 1;
        plVar1[2] = lVar11;
        lVar7 = local_78[3];
      }
      else {
        lVar11 = plVar1[2];
        if ((ulonglong)(*plVar1 - lVar11) < 2) {
          auVar13._0_8_ =
               <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
               <alloc[12e961f32105355]::alloc::Global>(plVar1,lVar11,2,1,1);
          auVar13._8_8_ = extraout_XMM0_Qb_02;
          lVar11 = plVar1[2];
        }
        *(undefined2 *)(plVar1[1] + lVar11) = 0xa2c;
        lVar11 = lVar11 + 2;
        plVar1[2] = lVar11;
        lVar7 = local_78[3];
      }
      if (lVar7 != 0) {
        uVar2 = local_78[2];
        do {
          uVar12 = auVar13._0_8_;
          if ((ulonglong)(*plVar1 - lVar11) < uVar2) {
            uVar12 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::
                     do_reserve_and_handle::<alloc[12e961f32105355]::alloc::Global>
                               (plVar1,lVar11,uVar2,1,1);
            lVar11 = plVar1[2];
LAB_0051c5f0:
            auVar13._0_8_ = (*(code *)PTR_memcpy_00799008)(uVar12,uVar2);
            auVar13._8_8_ = extraout_XMM0_Qb;
          }
          else if (uVar2 != 0) goto LAB_0051c5f0;
          lVar11 = lVar11 + uVar2;
          plVar1[2] = lVar11;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      serde_json[dc3825464c436029]::ser::format_escaped_str::
      <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::PrettyFormatter>
                (local_78);
      plVar1 = (longlong *)*local_78;
      lVar11 = plVar1[2];
      if ((ulonglong)(*plVar1 - lVar11) < 2) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(plVar1,lVar11,2,1,1);
        lVar11 = plVar1[2];
      }
      *(undefined2 *)(plVar1[1] + lVar11) = 0x203a;
      plVar1[2] = lVar11 + 2;
      lVar11 = <craggemini_core[66f3c71560d70857]::pool::AccountCooldownRecord_as_serde_core[48776c27239fa21f]::ser::Serialize>
               ::serialize::
               <&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::PrettyFormatter>>
                         ((longlong)pauVar9 + (-0x68 - (ulonglong)(uint)(iVar3 << 7)),local_78);
      auVar13._8_8_ = extraout_XMM0_Qb_00;
      auVar13._0_8_ = extraout_XMM0_Qa;
      if (lVar11 != 0) {
        return lVar11;
      }
      uVar10 = uVar10 - 1 & uVar10;
      bVar6 = false;
      *(undefined1 *)(local_78 + 4) = 1;
      local_40 = local_40 + -1;
    } while (local_40 != 0);
    plVar1 = (longlong *)*local_78;
    lVar7 = local_78[3] + -1;
    local_78[3] = lVar7;
    lVar11 = plVar1[2];
    if (*plVar1 == lVar11) {
      auVar13._0_8_ =
           <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
           <alloc[12e961f32105355]::alloc::Global>(plVar1,lVar11,1,1,1);
      auVar13._8_8_ = extraout_XMM0_Qb_04;
      lVar11 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar11) = 10;
    lVar11 = lVar11 + 1;
    plVar1[2] = lVar11;
    if (lVar7 != 0) {
      uVar2 = local_78[2];
      do {
        uVar12 = auVar13._0_8_;
        if ((ulonglong)(*plVar1 - lVar11) < uVar2) {
          uVar12 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle
                   ::<alloc[12e961f32105355]::alloc::Global>(plVar1,lVar11,uVar2,1,1);
          lVar11 = plVar1[2];
LAB_0051c7a0:
          auVar13._0_8_ = (*(code *)PTR_memcpy_00799008)(uVar12,uVar2);
          auVar13._8_8_ = extraout_XMM0_Qb_03;
        }
        else if (uVar2 != 0) goto LAB_0051c7a0;
        lVar11 = lVar11 + uVar2;
        plVar1[2] = lVar11;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    if (*plVar1 == lVar11) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(plVar1,lVar11,1,1,1);
      lVar11 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar11) = 0x7d;
    plVar1[2] = lVar11 + 1;
  }
  *(undefined1 *)(local_78 + 4) = 1;
  return 0;
}


