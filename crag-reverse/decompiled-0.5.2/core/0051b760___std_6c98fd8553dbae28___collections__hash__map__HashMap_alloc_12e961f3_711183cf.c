// 0051b760 <std[6c98fd8553dbae28]::collections::hash::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry>>

/* WARNING: Switch with 1 destination removed at 0x0051b765 */
/* <serde_json[dc3825464c436029]::ser::Compound<&mut alloc[12e961f32105355]::vec::Vec<u8>,
   serde_json[dc3825464c436029]::ser::CompactFormatter> as
   serde_core[48776c27239fa21f]::ser::SerializeStruct>::serialize_field::<std[6c98fd8553dbae28]::collections::hash::map::HashMap<alloc[12e961f32105355]::string::String,
   craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry>> */

longlong __rustcall
<serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
::serialize_field::
<std[6c98fd8553dbae28]::collections::hash::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry>>
          (char *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 (*pauVar7) [16];
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  longlong *plVar11;
  undefined1 (*pauVar12) [16];
  undefined1 auVar13 [16];
  byte local_70;
  char local_6f;
  longlong *local_68;
  ulonglong local_60;
  longlong local_58;
  longlong local_50;
  undefined1 local_48 [16];
  
  if (*param_1 != '\0') {
    lVar9 = (*(code *)PTR_syntax_00799910)(param_4,0);
    return lVar9;
  }
  plVar11 = *(longlong **)(param_1 + 8);
  if (param_1[1] != '\x01') {
    plVar1 = (longlong *)*plVar11;
    lVar9 = plVar1[2];
    if (*plVar1 == lVar9) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(plVar1,lVar9,1,1,1);
      lVar9 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar9) = 0x2c;
    plVar1[2] = lVar9 + 1;
  }
  param_1[1] = '\x02';
  serde_json[dc3825464c436029]::ser::format_escaped_str::
  <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
            (plVar11,param_2,param_2,4);
  plVar1 = (longlong *)*plVar11;
  lVar9 = plVar1[2];
  if (*plVar1 == lVar9) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(plVar1,lVar9,1,1,1);
    lVar9 = plVar1[2];
  }
  *(undefined1 *)(plVar1[1] + lVar9) = 0x3a;
  plVar1[2] = lVar9 + 1;
  pauVar7 = (undefined1 (*) [16])*param_3;
  lVar9 = param_3[3];
  plVar1 = (longlong *)*plVar11;
  lVar8 = plVar1[2];
  auVar13 = *pauVar7;
  if (*plVar1 == lVar8) {
    local_48 = *pauVar7;
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(plVar1,lVar8,1,1,1);
    lVar8 = plVar1[2];
    auVar13 = local_48;
  }
  *(undefined1 *)(plVar1[1] + lVar8) = 0x7b;
  lVar8 = lVar8 + 1;
  plVar1[2] = lVar8;
  if (lVar9 == 0) {
    if (*plVar1 == lVar8) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(plVar1,lVar8,1,1,1);
      lVar8 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar8) = 0x7d;
    plVar1[2] = lVar8 + 1;
LAB_0051b97b:
    lVar9 = 0;
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
    pauVar12 = pauVar7 + 1;
    if ((short)uVar10 == 0) {
      do {
        auVar13 = *pauVar12;
        pauVar7 = pauVar7 + -0x58;
        pauVar12 = pauVar12 + 1;
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
    uVar4 = 0;
    for (uVar5 = uVar10; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
      uVar4 = uVar4 + 1;
    }
    lVar6 = (ulonglong)uVar4 * -0x58;
    local_50 = lVar9;
    serde_json[dc3825464c436029]::ser::format_escaped_str::
    <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
              (plVar11,lVar8,*(undefined8 *)((longlong)pauVar7 + lVar6 + -0x50),
               *(undefined8 *)((longlong)pauVar7 + lVar6 + -0x48));
    lVar9 = plVar1[2];
    if (*plVar1 == lVar9) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(plVar1,lVar9,1,1,1);
      lVar9 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar9) = 0x3a;
    lVar9 = lVar9 + 1;
    plVar1[2] = lVar9;
    local_60 = *(ulonglong *)((longlong)pauVar7 + lVar6 + -0x28);
    if (*plVar1 == lVar9) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(plVar1,lVar9,1,1,1);
      lVar9 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar9) = 0x7b;
    plVar1[2] = lVar9 + 1;
    local_70 = 0;
    uVar2 = *(undefined8 *)((longlong)pauVar7 + lVar6 + -0x38);
    local_58 = *(longlong *)((longlong)pauVar7 + lVar6 + -0x30);
    local_6f = '\x02';
    local_68 = plVar11;
    serde_json[dc3825464c436029]::ser::format_escaped_str::
    <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
              (plVar11,lVar9 + 1,anon_ec7f14c74815bf4c93b295cfd0665412_113_llvm_7806621557641746444,
               9);
    local_48._0_8_ = plVar11;
    plVar11 = (longlong *)*plVar11;
    lVar9 = plVar11[2];
    if (*plVar11 == lVar9) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(plVar11,lVar9,1,1,1);
      lVar9 = plVar11[2];
    }
    *(undefined1 *)(plVar11[1] + lVar9) = 0x3a;
    plVar11[2] = lVar9 + 1;
    plVar11 = (longlong *)local_48._0_8_;
    serde_json[dc3825464c436029]::ser::format_escaped_str::
    <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
              (local_48._0_8_,lVar9 + 1,uVar2,local_58);
    lVar9 = <craggemini_core[66f3c71560d70857]::resume::ModelFamily>
                      (&local_70,*(undefined1 *)((longlong)pauVar7 + lVar6 + -8));
    if (lVar9 != 0) {
      return lVar9;
    }
    if (local_60 == 0xffffffffffffffff) {
LAB_0051b954:
      if (local_70 == 0) {
        <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
        ::serialize_entry::<str,u64>
                  (&local_70,anon_ec7f14c74815bf4c93b295cfd0665412_59_llvm_7806621557641746444,0xc,
                   (longlong)pauVar7 + lVar6 + -0x10);
        lVar9 = local_50;
        if (((local_70 & 1) == 0) && (local_6f != '\0')) {
          plVar1 = (longlong *)*local_68;
          lVar8 = plVar1[2];
          if (*plVar1 == lVar8) {
            <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
            <alloc[12e961f32105355]::alloc::Global>(plVar1,lVar8,1,1,1);
            lVar8 = plVar1[2];
          }
          *(undefined1 *)(plVar1[1] + lVar8) = 0x7d;
          plVar1[2] = lVar8 + 1;
        }
        lVar9 = lVar9 + -1;
        if (lVar9 != 0) {
          uVar10 = uVar10 - 1 & uVar10;
          do {
            if ((short)uVar10 == 0) {
              do {
                auVar13 = *pauVar12;
                pauVar7 = pauVar7 + -0x58;
                pauVar12 = pauVar12 + 1;
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
            local_60 = (ulonglong)uVar10;
            uVar4 = 0;
            for (; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
              uVar4 = uVar4 + 1;
            }
            lVar6 = (ulonglong)uVar4 * -0x58;
            uVar2 = *(undefined8 *)((longlong)pauVar7 + lVar6 + -0x50);
            uVar3 = *(undefined8 *)((longlong)pauVar7 + lVar6 + -0x48);
            plVar1 = (longlong *)*plVar11;
            lVar8 = plVar1[2];
            local_50 = lVar9;
            if (*plVar1 == lVar8) {
              <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
              <alloc[12e961f32105355]::alloc::Global>(plVar1,lVar8,1,1,1);
              lVar8 = plVar1[2];
              plVar11 = (longlong *)local_48._0_8_;
            }
            *(undefined1 *)(plVar1[1] + lVar8) = 0x2c;
            plVar1[2] = lVar8 + 1;
            serde_json[dc3825464c436029]::ser::format_escaped_str::
            <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
                      (plVar11,lVar8 + 1,uVar2,uVar3);
            plVar1 = (longlong *)*plVar11;
            lVar9 = plVar1[2];
            if (*plVar1 == lVar9) {
              <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
              <alloc[12e961f32105355]::alloc::Global>(plVar1,lVar9,1,1,1);
              lVar9 = plVar1[2];
            }
            *(undefined1 *)(plVar1[1] + lVar9) = 0x3a;
            plVar1[2] = lVar9 + 1;
            local_58 = *(longlong *)((longlong)pauVar7 + lVar6 + -0x28);
            plVar1 = (longlong *)*plVar11;
            lVar9 = plVar1[2];
            if (*plVar1 == lVar9) {
              <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
              <alloc[12e961f32105355]::alloc::Global>(plVar1,lVar9,1,1,1);
              lVar9 = plVar1[2];
            }
            *(undefined1 *)(plVar1[1] + lVar9) = 0x7b;
            plVar1[2] = lVar9 + 1;
            local_70 = 0;
            uVar2 = *(undefined8 *)((longlong)pauVar7 + lVar6 + -0x38);
            uVar3 = *(undefined8 *)((longlong)pauVar7 + lVar6 + -0x30);
            local_6f = '\x02';
            local_68 = plVar11;
            serde_json[dc3825464c436029]::ser::format_escaped_str::
            <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
                      (plVar11,lVar9 + 1,
                       anon_ec7f14c74815bf4c93b295cfd0665412_113_llvm_7806621557641746444,9);
            plVar11 = (longlong *)*plVar11;
            lVar9 = plVar11[2];
            if (*plVar11 == lVar9) {
              <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
              <alloc[12e961f32105355]::alloc::Global>(plVar11,lVar9,1,1,1);
              lVar9 = plVar11[2];
            }
            *(undefined1 *)(plVar11[1] + lVar9) = 0x3a;
            plVar11[2] = lVar9 + 1;
            serde_json[dc3825464c436029]::ser::format_escaped_str::
            <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
                      (local_48._0_8_,lVar9 + 1,uVar2,uVar3);
            lVar9 = <craggemini_core[66f3c71560d70857]::resume::ModelFamily>
                              (&local_70,*(undefined1 *)((longlong)pauVar7 + lVar6 + -8));
            if (lVar9 != 0) {
              return lVar9;
            }
            plVar11 = (longlong *)local_48._0_8_;
            if (local_58 != -1) {
              if (local_70 != 0) goto LAB_0051b95b;
              <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
              ::serialize_entry::
              <str,core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>
                        (&local_70,anon_ec7f14c74815bf4c93b295cfd0665412_54_llvm_7806621557641746444
                         ,10,(longlong)pauVar7 + lVar6 + -0x28);
            }
            if (local_70 != 0) goto LAB_0051b95b;
            <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
            ::serialize_entry::<str,u64>
                      (&local_70,anon_ec7f14c74815bf4c93b295cfd0665412_59_llvm_7806621557641746444,
                       0xc,(longlong)pauVar7 + lVar6 + -0x10);
            lVar9 = local_50;
            if (((local_70 & 1) == 0) && (local_6f != '\0')) {
              plVar1 = (longlong *)*local_68;
              lVar8 = plVar1[2];
              if (*plVar1 == lVar8) {
                <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
                <alloc[12e961f32105355]::alloc::Global>(plVar1,lVar8,1,1,1);
                lVar8 = plVar1[2];
              }
              *(undefined1 *)(plVar1[1] + lVar8) = 0x7d;
              plVar1[2] = lVar8 + 1;
            }
            uVar10 = (uint)local_60 - 1 & (uint)local_60;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
        }
        plVar11 = (longlong *)*plVar11;
        lVar9 = plVar11[2];
        if (*plVar11 == lVar9) {
          <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[12e961f32105355]::alloc::Global>(plVar11,lVar9,1,1,1);
          lVar9 = plVar11[2];
        }
        *(undefined1 *)(plVar11[1] + lVar9) = 0x7d;
        plVar11[2] = lVar9 + 1;
        goto LAB_0051b97b;
      }
    }
    else if (local_70 == 0) {
      <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
      ::serialize_entry::
      <str,core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>
                (&local_70,anon_ec7f14c74815bf4c93b295cfd0665412_54_llvm_7806621557641746444,10,
                 (longlong)pauVar7 + lVar6 + -0x28);
      goto LAB_0051b954;
    }
LAB_0051b95b:
    lVar9 = (*(code *)PTR_invalid_raw_value_00799700)();
  }
  return lVar9;
}


