// 004c9ea0 resolve_target_for_model

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_target_for_model */

longlong * __rustcall
<craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_target_for_model
          (longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4,longlong param_5,
          longlong param_6,longlong **param_7,longlong param_8,longlong param_9,undefined8 param_10)

{
  ulonglong *puVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  char cVar11;
  char cVar12;
  byte bVar13;
  byte bVar14;
  ushort uVar15;
  int iVar16;
  longlong *plVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined8 uVar20;
  undefined7 uVar24;
  longlong **pplVar21;
  longlong *plVar22;
  longlong *plVar23;
  longlong *plVar25;
  undefined1 *puVar26;
  ulonglong uVar27;
  undefined4 extraout_EDX;
  longlong lVar28;
  longlong *plVar29;
  undefined1 *puVar30;
  longlong lVar31;
  ulonglong uVar32;
  bool bVar33;
  bool bVar34;
  bool bVar35;
  undefined8 extraout_XMM0_Qa;
  uint uVar48;
  double dVar36;
  double dVar37;
  double extraout_XMM0_Qa_00;
  undefined8 uVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  double dVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  byte local_2ac;
  longlong *local_2a8;
  longlong *plStack_2a0;
  longlong *local_298;
  longlong *plStack_290;
  undefined8 local_288;
  longlong lStack_280;
  longlong local_278;
  longlong lStack_270;
  longlong **local_268;
  double dStack_260;
  longlong *local_250;
  undefined1 local_248 [16];
  longlong *local_238;
  longlong **pplStack_230;
  longlong *local_228;
  longlong *local_220;
  undefined4 local_218;
  ulonglong local_210;
  longlong *local_208;
  ulonglong local_1f8;
  longlong *local_1f0;
  longlong *local_1e8;
  longlong **pplStack_1e0;
  longlong *local_1d8;
  longlong *local_1d0;
  longlong **pplStack_1c8;
  longlong *local_1c0;
  longlong *local_1b8;
  longlong *local_1b0;
  longlong *local_1a8;
  longlong *local_1a0;
  longlong **pplStack_198;
  longlong *local_190;
  undefined1 local_188 [16];
  longlong *local_170;
  ulonglong local_168;
  longlong *local_160;
  longlong **pplStack_158;
  longlong *local_150;
  longlong *local_148;
  longlong *local_140;
  longlong *local_138;
  longlong *local_130;
  double local_128;
  longlong **local_120;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined **local_e8;
  longlong *local_e0;
  longlong *local_d8;
  longlong lStack_d0;
  longlong local_c8;
  longlong lStack_c0;
  longlong local_b8;
  longlong lStack_b0;
  longlong local_a8;
  longlong lStack_a0;
  longlong local_98;
  longlong local_90;
  longlong *local_88;
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  longlong *local_60;
  undefined1 local_58 [8];
  undefined8 local_50;
  char local_38;
  byte local_37;
  
  if (param_3 == 0) {
    if (param_5 == 0) {
      <craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::list
                (&local_88,*(longlong *)(param_2 + 0x170) + 0x10);
      local_d8 = (longlong *)0xfffffffffffffffe;
      plStack_290 = local_80 + local_78;
      local_2a8 = local_80;
      plStack_2a0 = local_80;
      local_298 = local_88;
      local_288 = &local_d8;
      lStack_280 = param_2;
      local_278 = param_2;
      <alloc[12e961f32105355]::vec::Vec<(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>),core[c0acaeba6ab4c2e0]::iter::adapters::filter_map::FilterMap<core[c0acaeba6ab4c2e0]::iter::adapters::filter::Filter<alloc[12e961f32105355]::vec::into_iter::IntoIter<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>,<craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_target_for_model::{closure#4}>,<craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_target_for_model::{closure#5}>>>
      ::from_iter(&local_160,&local_2a8);
      if (local_150 == (longlong *)0x0) {
        if (local_d8 == (longlong *)0xfffffffffffffffe) {
          *param_1 = -1;
          param_1[1] = (longlong)"no_calibrated_accounts";
          param_1[2] = 0x16;
          param_1[3] = -1;
          param_1[4] = (longlong)"no enabled and proxy-calibrated accounts available";
          param_1[5] = 0x32;
          param_1[6] = 0;
          *(undefined4 *)(param_1 + 7) = 0x60201f7;
          bVar13 = 1;
          local_150 = (longlong *)0x0;
        }
        else {
          param_1[6] = local_a8;
          param_1[7] = lStack_a0;
          param_1[4] = local_b8;
          param_1[5] = lStack_b0;
          param_1[2] = local_c8;
          param_1[3] = lStack_c0;
          *param_1 = (longlong)local_d8;
          param_1[1] = lStack_d0;
          local_150 = (longlong *)0x0;
          bVar13 = 0;
        }
LAB_004cad3f:
        uVar20 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                 <[(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)]>
                           (pplStack_158,local_150);
        if (local_160 != (longlong *)0x0) {
          uVar20 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar20,8);
        }
LAB_004cad6e:
        if (!(bool)(bVar13 & local_d8 != (longlong *)0xfffffffffffffffe)) {
          return param_1;
        }
        goto LAB_004cc02a;
      }
      local_218 = extraout_EDX;
      local_220 = (longlong *)(*(code *)PTR_now_007993f0)();
      (*(code *)PTR_duration_since_007993f8)(0,0);
      if ((char)local_2a8 == '\0') {
        local_168 = ((ulonglong)local_298 & 0xffffffff) / 1000000 + (longlong)plStack_2a0 * 1000;
        if (param_9 != 0) goto LAB_004ca179;
LAB_004ca324:
        uVar10 = 0xff;
      }
      else {
        local_168 = 0;
        if (param_9 == 0) goto LAB_004ca324;
LAB_004ca179:
        uVar10 = <craggemini_core[66f3c71560d70857]::resume::ModelFamily>::from_model
                           (param_9,param_10);
      }
      plVar17 = *(longlong **)(param_2 + 0x188);
      local_148 = plVar17 + 2;
      LOCK();
      bVar33 = (int)plVar17[2] == 0;
      if (bVar33) {
        *(int *)(plVar17 + 2) = 1;
      }
      UNLOCK();
      if (!bVar33) {
        (*(code *)PTR_lock_contended_00798fe0)();
      }
      if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
        local_2ac = 0;
        cVar11 = *(char *)((longlong)plVar17 + 0x14);
        plVar25 = local_2a8;
        pplVar21 = pplStack_158;
        local_2a8 = local_148;
      }
      else {
        local_2ac = (*(code *)PTR_is_zero_slow_path_00798fe8)();
        local_2ac = local_2ac ^ 1;
        cVar11 = *(char *)((longlong)plVar17 + 0x14);
        plVar25 = local_2a8;
        pplVar21 = pplStack_158;
        local_2a8 = local_148;
      }
      local_148 = local_2a8;
      local_130 = param_1;
      if (cVar11 != '\0') {
        uVar32 = (ulonglong)plStack_2a0 >> 8;
        plStack_2a0 = (longlong *)CONCAT71((int7)uVar32,local_2ac);
        (*(code *)PTR_unwrap_failed_00799028)
                  (&
                   PTR_<std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<craggemini_core[66f3c71560d70857]::resume::SessionStore>>>_0078b550
                   ,&local_2a8,
                   &PTR_anon_572fb51faa0db1e51baf8d00d92dd3e9_2_llvm_7677212527096675952_0078bce8);
        goto LAB_004cc24b;
      }
      local_1a0 = (longlong *)0x0;
      pplStack_198 = (longlong **)&DAT_00000008;
      local_190 = (longlong *)0x0;
      local_1e8 = (longlong *)0x0;
      pplStack_1e0 = (longlong **)&DAT_00000008;
      local_1d8 = (longlong *)0x0;
      local_1d0 = (longlong *)0x0;
      pplStack_1c8 = (longlong **)&DAT_00000008;
      local_1c0 = (longlong *)0x0;
      local_1b8 = (longlong *)0x0;
      local_1b0 = (longlong *)&DAT_00000008;
      local_1a8 = (longlong *)0x0;
      pplStack_158 = pplVar21;
      local_138 = plVar17;
      if (local_150 != (longlong *)0x0) {
        local_120 = pplVar21 + (longlong)local_150 * 2;
        local_140 = plVar17 + 10;
        uVar32 = (ulonglong)local_250 >> 8;
        local_250 = (longlong *)CONCAT71((int7)uVar32,uVar10);
        do {
          local_2a8 = plVar25;
          plVar17 = local_138;
          if (local_138[9] == 0) {
            local_268 = (longlong **)0x0;
          }
          else {
            lVar18 = (*pplVar21)[0x1e];
            lVar28 = (*pplVar21)[0x1f];
            local_188._0_8_ = lVar18;
            uVar19 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
                     ::hash_one::<&str>(local_140,lVar18,lVar28);
            lVar18 = plVar17[6];
            uVar32 = plVar17[7];
            bVar13 = (byte)(uVar19 >> 0x39);
            auVar42 = ZEXT216(CONCAT11(bVar13,bVar13));
            auVar39 = pshuflw(auVar42,auVar42,0);
            auVar42._0_8_ = auVar39._0_8_;
            auVar42._8_4_ = auVar39._0_4_;
            auVar42._12_4_ = auVar39._4_4_;
            lVar31 = 0;
            while( true ) {
              local_268 = (longlong **)(uVar19 & uVar32);
              auVar39 = *(undefined1 (*) [16])(lVar18 + (longlong)local_268);
              auVar40[0] = -(auVar39[0] == auVar42[0]);
              auVar40[1] = -(auVar39[1] == auVar42[1]);
              auVar40[2] = -(auVar39[2] == auVar42[2]);
              auVar40[3] = -(auVar39[3] == auVar42[3]);
              auVar40[4] = -(auVar39[4] == auVar42[4]);
              auVar40[5] = -(auVar39[5] == auVar42[5]);
              auVar40[6] = -(auVar39[6] == auVar42[6]);
              auVar40[7] = -(auVar39[7] == auVar42[7]);
              auVar40[8] = -(auVar39[8] == auVar42[8]);
              auVar40[9] = -(auVar39[9] == auVar42[9]);
              auVar40[10] = -(auVar39[10] == auVar42[10]);
              auVar40[0xb] = -(auVar39[0xb] == auVar42[0xb]);
              auVar40[0xc] = -(auVar39[0xc] == auVar42[0xc]);
              auVar40[0xd] = -(auVar39[0xd] == auVar42[0xd]);
              auVar40[0xe] = -(auVar39[0xe] == auVar42[0xe]);
              auVar40[0xf] = -(auVar39[0xf] == auVar42[0xf]);
              uVar15 = (ushort)(SUB161(auVar40 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar40 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar40 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar40 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar40 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar40 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar40 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar40 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar40 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar40 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar40 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar40 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar40 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar40[0xf] >> 7) << 0xf;
              uVar48 = (uint)uVar15;
              if (uVar15 != 0) {
                local_118._0_8_ = lVar31;
                local_248 = auVar39;
                local_f8 = auVar42;
                do {
                  uVar3 = 0;
                  for (uVar4 = uVar48; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
                    uVar3 = uVar3 + 1;
                  }
                  uVar19 = (ulonglong)uVar3 + (longlong)local_268 & uVar32;
                  lVar31 = lVar18 + uVar19 * -0x80;
                  if ((lVar28 == *(longlong *)(lVar31 + -0x70)) &&
                     (uVar20 = (*(code *)PTR_bcmp_00799020)(uVar19 * 0x80,lVar28), (int)uVar20 == 0)
                     ) {
                    uVar24 = (undefined7)((ulonglong)uVar20 >> 8);
                    local_268 = (longlong **)CONCAT71(uVar24,1);
                    if (*(char *)(lVar31 + -8) == '\0') {
                      local_268 = (longlong **)CONCAT71(uVar24,*(longlong *)(lVar31 + -0x50) != -1);
                    }
                    goto joined_r0x004ca605;
                  }
                  uVar15 = (ushort)(uVar48 - 1) & (ushort)uVar48;
                  uVar48 = CONCAT22((short)(uVar48 - 1 >> 0x10),uVar15);
                  lVar31 = local_118._0_8_;
                  auVar42 = local_f8;
                  auVar39 = local_248;
                } while (uVar15 != 0);
              }
              auVar54[0] = -(auVar39[0] == -1);
              auVar54[1] = -(auVar39[1] == -1);
              auVar54[2] = -(auVar39[2] == -1);
              auVar54[3] = -(auVar39[3] == -1);
              auVar54[4] = -(auVar39[4] == -1);
              auVar54[5] = -(auVar39[5] == -1);
              auVar54[6] = -(auVar39[6] == -1);
              auVar54[7] = -(auVar39[7] == -1);
              auVar54[8] = -(auVar39[8] == -1);
              auVar54[9] = -(auVar39[9] == -1);
              auVar54[10] = -(auVar39[10] == -1);
              auVar54[0xb] = -(auVar39[0xb] == -1);
              auVar54[0xc] = -(auVar39[0xc] == -1);
              auVar54[0xd] = -(auVar39[0xd] == -1);
              auVar54[0xe] = -(auVar39[0xe] == -1);
              auVar54[0xf] = -(auVar39[0xf] == -1);
              if ((((((((((((((((SUB161(auVar54 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar54 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar54 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar54 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar54 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar54 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar54 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar54 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar54 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar54 >> 0x4f,0) & 1) != 0) || (SUB161(auVar54 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar54 >> 0x5f,0) & 1) != 0) ||
                    (SUB161(auVar54 >> 0x67,0) & 1) != 0) || (SUB161(auVar54 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar54 >> 0x77,0) & 1) != 0) || auVar54[0xf] < '\0') break;
              uVar19 = (longlong)local_268 + lVar31 + 0x10;
              lVar31 = lVar31 + 0x10;
            }
            local_268 = (longlong **)0x0;
joined_r0x004ca605:
            if ((char)local_250 != -1) {
              uVar19 = (ulonglong)local_2a8 >> 8;
              local_2a8 = (longlong *)CONCAT71((int7)uVar19,(char)local_250);
              uVar19 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
                       ::hash_one::<&str>(local_140,local_188._0_8_,lVar28);
              bVar13 = (byte)(uVar19 >> 0x39);
              auVar42 = ZEXT216(CONCAT11(bVar13,bVar13));
              auVar42 = pshuflw(auVar42,auVar42,0);
              auVar39._0_8_ = auVar42._0_8_;
              auVar39._8_4_ = auVar42._0_4_;
              auVar39._12_4_ = auVar42._4_4_;
              lVar31 = 0;
              while( true ) {
                uVar19 = uVar19 & uVar32;
                auVar42 = *(undefined1 (*) [16])(lVar18 + uVar19);
                auVar43[0] = -(auVar42[0] == auVar39[0]);
                auVar43[1] = -(auVar42[1] == auVar39[1]);
                auVar43[2] = -(auVar42[2] == auVar39[2]);
                auVar43[3] = -(auVar42[3] == auVar39[3]);
                auVar43[4] = -(auVar42[4] == auVar39[4]);
                auVar43[5] = -(auVar42[5] == auVar39[5]);
                auVar43[6] = -(auVar42[6] == auVar39[6]);
                auVar43[7] = -(auVar42[7] == auVar39[7]);
                auVar43[8] = -(auVar42[8] == auVar39[8]);
                auVar43[9] = -(auVar42[9] == auVar39[9]);
                auVar43[10] = -(auVar42[10] == auVar39[10]);
                auVar43[0xb] = -(auVar42[0xb] == auVar39[0xb]);
                auVar43[0xc] = -(auVar42[0xc] == auVar39[0xc]);
                auVar43[0xd] = -(auVar42[0xd] == auVar39[0xd]);
                auVar43[0xe] = -(auVar42[0xe] == auVar39[0xe]);
                auVar43[0xf] = -(auVar42[0xf] == auVar39[0xf]);
                uVar15 = (ushort)(SUB161(auVar43 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe |
                         (ushort)(auVar43[0xf] >> 7) << 0xf;
                uVar48 = (uint)uVar15;
                if (uVar15 != 0) {
                  local_f8._0_8_ = uVar19;
                  local_248._0_8_ = lVar31;
                  local_118 = auVar39;
                  local_108 = auVar42;
                  do {
                    uVar3 = 0;
                    for (uVar4 = uVar48; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
                      uVar3 = uVar3 + 1;
                    }
                    uVar19 = uVar3 + uVar19 & uVar32;
                    lVar31 = lVar18 + uVar19 * -0x80;
                    if ((lVar28 == *(longlong *)(lVar31 + -0x70)) &&
                       (iVar16 = (*(code *)PTR_bcmp_00799020)(uVar19 * 0x80,lVar28), iVar16 == 0)) {
                      if (*(longlong *)(lVar31 + -0x20) == 0) goto LAB_004ca61d;
                      uVar32 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
                               ::hash_one::<&craggemini_core[66f3c71560d70857]::resume::ModelFamily>
                                         (lVar31 + -0x18,&local_2a8);
                      bVar13 = (byte)(uVar32 >> 0x39);
                      auVar42 = ZEXT216(CONCAT11(bVar13,bVar13));
                      auVar42 = pshuflw(auVar42,auVar42,0);
                      lVar18 = 0;
                      goto LAB_004ca97c;
                    }
                    uVar15 = (ushort)(uVar48 - 1) & (ushort)uVar48;
                    uVar48 = CONCAT22((short)(uVar48 - 1 >> 0x10),uVar15);
                    uVar19 = local_f8._0_8_;
                    lVar31 = local_248._0_8_;
                    auVar39 = local_118;
                    auVar42 = local_108;
                  } while (uVar15 != 0);
                }
                auVar56[0] = -(auVar42[0] == -1);
                auVar56[1] = -(auVar42[1] == -1);
                auVar56[2] = -(auVar42[2] == -1);
                auVar56[3] = -(auVar42[3] == -1);
                auVar56[4] = -(auVar42[4] == -1);
                auVar56[5] = -(auVar42[5] == -1);
                auVar56[6] = -(auVar42[6] == -1);
                auVar56[7] = -(auVar42[7] == -1);
                auVar56[8] = -(auVar42[8] == -1);
                auVar56[9] = -(auVar42[9] == -1);
                auVar56[10] = -(auVar42[10] == -1);
                auVar56[0xb] = -(auVar42[0xb] == -1);
                auVar56[0xc] = -(auVar42[0xc] == -1);
                auVar56[0xd] = -(auVar42[0xd] == -1);
                auVar56[0xe] = -(auVar42[0xe] == -1);
                auVar56[0xf] = -(auVar42[0xf] == -1);
                if ((((((((((((((((SUB161(auVar56 >> 7,0) & 1) != 0 ||
                                 (SUB161(auVar56 >> 0xf,0) & 1) != 0) ||
                                (SUB161(auVar56 >> 0x17,0) & 1) != 0) ||
                               (SUB161(auVar56 >> 0x1f,0) & 1) != 0) ||
                              (SUB161(auVar56 >> 0x27,0) & 1) != 0) ||
                             (SUB161(auVar56 >> 0x2f,0) & 1) != 0) ||
                            (SUB161(auVar56 >> 0x37,0) & 1) != 0) ||
                           (SUB161(auVar56 >> 0x3f,0) & 1) != 0) ||
                          (SUB161(auVar56 >> 0x47,0) & 1) != 0) ||
                         (SUB161(auVar56 >> 0x4f,0) & 1) != 0) ||
                        (SUB161(auVar56 >> 0x57,0) & 1) != 0) ||
                       (SUB161(auVar56 >> 0x5f,0) & 1) != 0) || (SUB161(auVar56 >> 0x67,0) & 1) != 0
                      ) || (SUB161(auVar56 >> 0x6f,0) & 1) != 0) ||
                    (SUB161(auVar56 >> 0x77,0) & 1) != 0) || auVar56[0xf] < '\0') break;
                uVar19 = uVar19 + lVar31 + 0x10;
                lVar31 = lVar31 + 0x10;
              }
            }
          }
LAB_004ca61d:
          plVar17 = (longlong *)0x0;
LAB_004ca620:
          cVar11 = <craggemini_core[66f3c71560d70857]::pool::AccountPool>::is_circuit_open
                             (pplVar21[1] + 2);
          plVar25 = pplVar21[1];
          LOCK();
          bVar33 = (int)plVar25[0x20] == 0;
          if (bVar33) {
            *(int *)(plVar25 + 0x20) = 1;
          }
          UNLOCK();
          if (!bVar33) {
            (*(code *)PTR_lock_contended_00798fe0)();
          }
          if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
            bVar13 = 0;
          }
          else {
            bVar13 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
            bVar13 = bVar13 ^ 1;
          }
          dVar37 = (double)plVar25[0x21];
          lVar18 = local_168 - plVar25[0x25];
          if (local_168 < (ulonglong)plVar25[0x25] || lVar18 == 0) {
            local_188._8_8_ = plVar25[0x22];
            local_188._0_8_ = dVar37;
            bVar33 = false;
            if (_DAT_00185410 <= dVar37) goto LAB_004ca73f;
          }
          else {
            auVar41._8_4_ = (int)((ulonglong)lVar18 >> 0x20);
            auVar41._0_8_ = lVar18;
            auVar41._12_4_ = DAT_00182b10._4_4_;
            dVar49 = ((auVar41._8_8_ - _UNK_00182568) +
                     ((double)CONCAT44((undefined4)DAT_00182b10,(int)lVar18) - _DAT_00182560)) /
                     _s__00185460;
            auVar55._0_8_ = dVar37 + (dVar49 / _s__00185430) * _DAT_00183f40;
            auVar55._8_8_ = (double)plVar25[0x22] + dVar49 * _UNK_00183f48;
            local_188 = minpd(auVar55,_s__00183ce0);
            *(undefined1 (*) [16])(plVar25 + 0x21) = local_188;
            plVar25[0x25] = local_168;
            bVar33 = false;
            if (_DAT_00185410 <= local_188._0_8_) {
LAB_004ca73f:
              bVar33 = false;
              if (_s__00185250 <= local_188._8_8_) {
                bVar33 = _DAT_00185100 < (double)plVar25[0x23];
              }
            }
          }
          if (((bVar13 == 0) &&
              ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
             (cVar12 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar12 == '\0')) {
            *(undefined1 *)((longlong)plVar25 + 0x104) = 1;
          }
          LOCK();
          lVar18 = plVar25[0x20];
          *(int *)(plVar25 + 0x20) = 0;
          UNLOCK();
          if ((int)lVar18 == 2) {
            (*(code *)PTR_wake_00799010)();
          }
          plVar22 = local_190;
          plVar25 = local_1a8;
          if ((char)local_268 == '\0') {
            if (plVar17 == (longlong *)0x0) {
              if (cVar11 == '\0') {
                if (bVar33) {
                  plVar17 = *pplVar21;
                  LOCK();
                  lVar18 = *plVar17;
                  *plVar17 = *plVar17 + 1;
                  UNLOCK();
                  if (*plVar17 == 0 || SCARRY8(lVar18,1) != *plVar17 < 0) goto LAB_004cc24b;
                  plVar17 = *pplVar21;
                  plVar25 = pplVar21[1];
                  LOCK();
                  lVar18 = *plVar25;
                  *plVar25 = *plVar25 + 1;
                  UNLOCK();
                  if (*plVar25 == 0 || SCARRY8(lVar18,1) != *plVar25 < 0) goto LAB_004cc24b;
                  plVar25 = pplVar21[1];
                  local_2a8 = plVar17;
                  plStack_2a0 = plVar25;
                  if (local_190 == local_1a0) {
                    <alloc[12e961f32105355]::raw_vec::RawVec<(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)>>
                    ::grow_one(&local_1a0);
                  }
                  pplStack_198[(longlong)plVar22 * 2] = plVar17;
                  pplStack_198[(longlong)plVar22 * 2 + 1] = plVar25;
                  local_190 = (longlong *)((longlong)plVar22 + 1);
                }
                plVar17 = local_1d8;
                if (_DAT_00185090 <= (double)local_188._0_8_) {
                  plVar25 = *pplVar21;
                  LOCK();
                  lVar18 = *plVar25;
                  *plVar25 = *plVar25 + 1;
                  UNLOCK();
                  if (*plVar25 == 0 || SCARRY8(lVar18,1) != *plVar25 < 0) goto LAB_004cc24b;
                  plVar25 = *pplVar21;
                  plVar22 = pplVar21[1];
                  LOCK();
                  lVar18 = *plVar22;
                  *plVar22 = *plVar22 + 1;
                  UNLOCK();
                  if (*plVar22 == 0 || SCARRY8(lVar18,1) != *plVar22 < 0) goto LAB_004cc24b;
                  plVar22 = pplVar21[1];
                  local_2a8 = plVar25;
                  plStack_2a0 = plVar22;
                  if (local_1d8 == local_1e8) {
                    <alloc[12e961f32105355]::raw_vec::RawVec<(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)>>
                    ::grow_one(&local_1e8);
                  }
                  pplStack_1e0[(longlong)plVar17 * 2] = plVar25;
                  pplStack_1e0[(longlong)plVar17 * 2 + 1] = plVar22;
                  local_1d8 = (longlong *)((longlong)plVar17 + 1);
                }
              }
              plVar25 = local_1c0;
              plVar17 = *pplVar21;
              LOCK();
              lVar18 = *plVar17;
              *plVar17 = *plVar17 + 1;
              UNLOCK();
              if (*plVar17 == 0 || SCARRY8(lVar18,1) != *plVar17 < 0) goto LAB_004cc24b;
              plVar17 = *pplVar21;
              plVar22 = pplVar21[1];
              LOCK();
              lVar18 = *plVar22;
              *plVar22 = *plVar22 + 1;
              UNLOCK();
              if (*plVar22 == 0 || SCARRY8(lVar18,1) != *plVar22 < 0) goto LAB_004cc24b;
              plVar22 = pplVar21[1];
              local_2a8 = plVar17;
              plStack_2a0 = plVar22;
              if (local_1c0 == local_1d0) {
                <alloc[12e961f32105355]::raw_vec::RawVec<(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)>>
                ::grow_one(&local_1d0);
              }
              pplStack_1c8[(longlong)plVar25 * 2] = plVar17;
              pplStack_1c8[(longlong)plVar25 * 2 + 1] = plVar22;
              local_1c0 = (longlong *)((longlong)plVar25 + 1);
            }
            else {
              plVar22 = *pplVar21;
              LOCK();
              lVar18 = *plVar22;
              *plVar22 = *plVar22 + 1;
              UNLOCK();
              if (*plVar22 == 0 || SCARRY8(lVar18,1) != *plVar22 < 0) goto LAB_004cc24b;
              plVar22 = *pplVar21;
              plVar29 = pplVar21[1];
              LOCK();
              lVar18 = *plVar29;
              *plVar29 = *plVar29 + 1;
              UNLOCK();
              if (*plVar29 == 0 || SCARRY8(lVar18,1) != *plVar29 < 0) goto LAB_004cc24b;
              local_298 = pplVar21[1];
              local_2a8 = plVar22;
              plStack_2a0 = plVar17;
              if (local_1a8 == local_1b8) {
                <alloc[12e961f32105355]::raw_vec::RawVec<(u64,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)>>
                ::grow_one(&local_1b8);
              }
              local_1b0[(longlong)plVar25 * 3 + 2] = (longlong)local_298;
              local_1b0[(longlong)plVar25 * 3] = (longlong)local_2a8;
              (local_1b0 + (longlong)plVar25 * 3)[1] = (longlong)plStack_2a0;
              local_1a8 = (longlong *)((longlong)plVar25 + 1);
            }
          }
          pplVar21 = pplVar21 + 2;
          plVar25 = local_2a8;
        } while (pplVar21 != local_120);
      }
      local_2a8 = plVar25;
      if (((local_2ac == 0) &&
          ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
         (cVar11 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar11 == '\0')) {
        *(undefined1 *)((longlong)local_138 + 0x14) = 1;
      }
      LOCK();
      lVar18 = *local_148;
      *(int *)local_148 = 0;
      UNLOCK();
      if ((int)lVar18 == 2) {
        (*(code *)PTR_wake_00799010)();
      }
      if (local_1d8 == (longlong *)0x0) {
        pplVar21 = &local_1d0;
        if (local_1c0 == (longlong *)0x0) {
          pplVar21 = &local_160;
        }
        local_170 = pplVar21[2];
      }
      else {
        pplVar21 = &local_1e8;
        local_170 = local_1d8;
      }
      uVar32 = (longlong)local_170 * 0x10;
      if (0x7ffffffffffffff8 < uVar32 || (longlong *)0xfffffffffffffff < local_170) {
LAB_004cac6a:
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_004cc24b;
      }
      if (uVar32 == 0) {
        lVar18 = 8;
      }
      else {
        plVar17 = pplVar21[1];
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        lVar18 = (*(code *)PTR___rust_alloc_00799000)();
        if (lVar18 == 0) goto LAB_004cac6a;
        if (local_170 != (longlong *)0x0) {
          uVar19 = 0;
          plVar25 = local_170;
          do {
            if (uVar32 == uVar19) break;
            plVar22 = (longlong *)*plVar17;
            plVar29 = (longlong *)plVar17[1];
            LOCK();
            lVar28 = *plVar22;
            *plVar22 = *plVar22 + 1;
            UNLOCK();
            if (*plVar22 == 0 || SCARRY8(lVar28,1) != *plVar22 < 0) goto LAB_004cc24b;
            LOCK();
            lVar28 = *plVar29;
            *plVar29 = *plVar29 + 1;
            UNLOCK();
            if (*plVar29 == 0 || SCARRY8(lVar28,1) != *plVar29 < 0) goto LAB_004cc24b;
            plVar25 = (longlong *)((longlong)plVar25 + -1);
            plVar17 = plVar17 + 2;
            *(longlong **)(lVar18 + uVar19) = plVar22;
            *(longlong **)(lVar18 + 8 + uVar19) = plVar29;
            uVar19 = uVar19 + 0x10;
          } while (plVar25 != (longlong *)0x0);
        }
      }
      local_248._0_8_ = lVar18;
      local_70 = local_170;
      local_60 = local_170;
      local_68 = lVar18;
      if (local_190 == (longlong *)0x0) {
        if (local_1d8 != (longlong *)0x0) {
          local_228 = local_1d8;
          local_238 = local_1e8;
          pplStack_230 = pplStack_1e0;
          bVar33 = true;
          bVar7 = false;
          bVar6 = true;
LAB_004cb229:
          bVar8 = true;
          goto LAB_004cb22f;
        }
        if (local_1c0 != (longlong *)0x0) {
          local_228 = local_1c0;
          local_238 = local_1d0;
          pplStack_230 = pplStack_1c8;
          bVar33 = true;
          bVar6 = false;
LAB_004cb223:
          bVar7 = true;
          goto LAB_004cb229;
        }
        if (local_1a8 != (longlong *)0x0) {
          uVar20 = <[(u64,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)]>
                   ::sort_by_key::
                   <u64,<craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_target_for_model::_closure_7_>
                             (local_1b0);
          if (local_1a8 == (longlong *)0x0) {
            (*(code *)PTR_panic_bounds_check_00799520)
                      (uVar20,&
                              PTR_anon_572fb51faa0db1e51baf8d00d92dd3e9_2_llvm_7677212527096675952_0078bd00
                      );
            goto LAB_004cc24b;
          }
          local_220 = (longlong *)local_1b0[1];
          plStack_290 = local_1b0 + (longlong)local_1a8 * 3;
          local_2a8 = local_1b0;
          plStack_2a0 = local_1b0;
          local_298 = local_1b8;
          local_288 = &local_220;
          alloc[12e961f32105355]::vec::in_place_collect::from_iter_in_place::
          <core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::iter::adapters::filter::Filter<alloc[12e961f32105355]::vec::into_iter::IntoIter<(u64,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)>,<craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_target_for_model::_closure_8_>,<craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_target_for_model::_closure_9_>,(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)>
                    (&local_238,&local_2a8);
          bVar6 = true;
          bVar33 = false;
          goto LAB_004cb223;
        }
        local_228 = local_150;
        local_238 = local_160;
        pplStack_230 = pplStack_158;
        bVar33 = true;
        bVar9 = false;
        bVar6 = true;
        bVar7 = true;
        bVar8 = true;
      }
      else {
        local_228 = local_190;
        local_238 = local_1a0;
        pplStack_230 = pplStack_198;
        bVar33 = true;
        bVar8 = false;
        bVar6 = true;
        bVar7 = true;
LAB_004cb22f:
        bVar9 = true;
      }
      get_policy(local_58,param_2);
      bVar13 = param_7 != (longlong **)0x0 & local_37;
      local_1f8 = uVar32;
      if (bVar13 != 0) {
        plVar17 = (longlong *)(param_2 + 0x1d0);
        LOCK();
        bVar34 = *(int *)(param_2 + 0x1d0) == 0;
        if (bVar34) {
          *(int *)(param_2 + 0x1d0) = 1;
        }
        UNLOCK();
        if (!bVar34) {
          (*(code *)PTR_lock_contended_00798fe0)();
        }
        if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
          bVar14 = 0;
          cVar11 = *(char *)(param_2 + 0x1d4);
        }
        else {
          bVar14 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
          bVar14 = bVar14 ^ 1;
          cVar11 = *(char *)(param_2 + 0x1d4);
        }
        if (cVar11 != '\0') {
          uVar48 = (uint)local_218 >> 8;
          local_218 = CONCAT31((int3)uVar48,bVar14);
          local_220 = plVar17;
          (*(code *)PTR_unwrap_failed_00799028)
                    (&
                     PTR_<std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<craggemini_core[66f3c71560d70857]::resume::SessionStore>>>_0078b590
                     ,&local_220,
                     &PTR_anon_572fb51faa0db1e51baf8d00d92dd3e9_2_llvm_7677212527096675952_0078bd18)
          ;
          goto LAB_004cc24b;
        }
        <craggemini_core[66f3c71560d70857]::resume::StickyIndex>::resolve_inbound_id
                  (&local_2a8,param_2 + 0x1d8,param_7,param_8);
        if (((bVar14 == 0) &&
            ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
           (cVar11 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar11 == '\0')) {
          *(undefined1 *)(param_2 + 0x1d4) = 1;
        }
        LOCK();
        iVar16 = *(int *)plVar17;
        *(int *)plVar17 = 0;
        UNLOCK();
        if (iVar16 == 2) {
          (*(code *)PTR_wake_00799010)();
        }
        lVar18 = lStack_280;
        local_268 = local_288;
        lVar28 = lStack_280;
        pplVar21 = local_288;
        if (local_278 == 2) {
          lVar28 = param_8;
          pplVar21 = param_7;
        }
        iVar16 = (int)local_278;
        if (local_170 != (longlong *)0x0) {
          uVar32 = 0;
          do {
            <craggemini_core[66f3c71560d70857]::pool::AccountPool>::load_metrics
                      (&local_220,*(longlong *)(local_248._0_8_ + 8 + uVar32) + 0x10);
            lVar31 = *(longlong *)(local_248._0_8_ + 8 + uVar32);
            if ((local_220 < local_208) || (local_210 < *(ulonglong *)(lVar31 + 0x158))) {
              cVar11 = <craggemini_core[66f3c71560d70857]::pool::AccountPool>::has_warm_conversation
                                 (lVar31 + 0x10,pplVar21,lVar28);
              if (cVar11 == '\0') {
                cVar11 = <craggemini_core[66f3c71560d70857]::pool::AccountPool>::
                         has_warm_conversation
                                   (*(longlong *)(local_248._0_8_ + 8 + uVar32) + 0x10,param_7,
                                    param_8);
                if (cVar11 == '\0') goto LAB_004cb34d;
              }
              uVar20 = record_sticky_account
                                 (param_2,pplVar21,lVar28,
                                  *(undefined8 *)(*(longlong *)(local_248._0_8_ + uVar32) + 0xf0),
                                  *(undefined8 *)(*(longlong *)(local_248._0_8_ + uVar32) + 0xf8),
                                  local_50);
              param_1 = local_130;
              plVar17 = *(longlong **)(local_248._0_8_ + uVar32);
              LOCK();
              lVar18 = *plVar17;
              *plVar17 = *plVar17 + 1;
              UNLOCK();
              if (*plVar17 == 0 || SCARRY8(lVar18,1) != *plVar17 < 0) goto LAB_004cc24b;
              lVar28 = *(longlong *)(local_248._0_8_ + uVar32);
              plVar17 = *(longlong **)(local_248._0_8_ + 8 + uVar32);
              LOCK();
              lVar18 = *plVar17;
              *plVar17 = *plVar17 + 1;
              UNLOCK();
              if (*plVar17 == 0 || SCARRY8(lVar18,1) != *plVar17 < 0) goto LAB_004cc24b;
              lVar18 = *(longlong *)(local_248._0_8_ + 8 + uVar32);
              local_130[1] = lVar28;
              local_130[2] = lVar18;
              *local_130 = -2;
              if (iVar16 == 2) goto LAB_004cb5e0;
              plVar17 = plStack_290;
              if (local_2a8 != (longlong *)0x0) {
                uVar20 = (*(code *)PTR___rust_dealloc_00798fc8)(lVar18,1);
                plVar17 = plStack_290;
              }
              goto joined_r0x004cb494;
            }
LAB_004cb34d:
            uVar32 = uVar32 + 0x10;
          } while (local_1f8 != uVar32);
        }
        param_1 = local_130;
        plVar25 = plStack_290;
        plVar17 = local_2a8;
        if (iVar16 != 2) {
          local_90 = local_1f8 + local_248._0_8_;
          local_98 = local_248._0_8_;
          plVar22 = (longlong *)
                    <core[c0acaeba6ab4c2e0]::slice::iter::Iter<(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
                    ::find::
                    <<craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_target_for_model::_closure_11_>
                              (&local_98,plStack_2a0,local_298);
          if ((plVar22 != (longlong *)0x0) &&
             ((<craggemini_core[66f3c71560d70857]::pool::AccountPool>::load_metrics
                         (&local_220,plVar22[1] + 0x10), local_220 < local_208 ||
              (local_210 < *(ulonglong *)(plVar22[1] + 0x158))))) {
            uVar20 = record_sticky_account
                               (param_2,local_268,lVar18,*(undefined8 *)(*plVar22 + 0xf0),
                                *(undefined8 *)(*plVar22 + 0xf8),local_50);
            plVar29 = (longlong *)*plVar22;
            LOCK();
            lVar18 = *plVar29;
            *plVar29 = *plVar29 + 1;
            UNLOCK();
            if (*plVar29 == 0 || SCARRY8(lVar18,1) != *plVar29 < 0) goto LAB_004cc24b;
            lVar28 = *plVar22;
            plVar29 = (longlong *)plVar22[1];
            LOCK();
            lVar18 = *plVar29;
            *plVar29 = *plVar29 + 1;
            UNLOCK();
            if (*plVar29 == 0 || SCARRY8(lVar18,1) != *plVar29 < 0) goto LAB_004cc24b;
            lVar18 = plVar22[1];
            param_1[1] = lVar28;
            param_1[2] = lVar18;
            *param_1 = -2;
            if (plVar25 != (longlong *)0x0) {
              uVar20 = (*(code *)PTR___rust_dealloc_00798fc8)(lVar18,1);
            }
joined_r0x004cb494:
            if (plVar17 != (longlong *)0x0) {
              (*(code *)PTR___rust_dealloc_00798fc8)(uVar20,1);
            }
LAB_004cb5e0:
            uVar20 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                     <[(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)]>
                               (pplStack_230,local_228);
            if (local_238 != (longlong *)0x0) {
              (*(code *)PTR___rust_dealloc_00798fc8)(uVar20,8);
            }
            plVar17 = local_170;
            uVar20 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                     <[(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)]>
                               (local_248._0_8_,local_170);
            if (plVar17 != (longlong *)0x0) {
              uVar20 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar20,8);
            }
            if (bVar33) {
              uVar20 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                       <alloc[12e961f32105355]::vec::Vec<(u64,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)>>
                                 (&local_1b8);
            }
            if (bVar6) {
              uVar20 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                       <alloc[12e961f32105355]::vec::Vec<(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)>>
                                 (&local_1d0);
            }
            if (bVar7) {
              uVar20 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                       <alloc[12e961f32105355]::vec::Vec<(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)>>
                                 (&local_1e8);
            }
            if (bVar8) {
              uVar20 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                       <alloc[12e961f32105355]::vec::Vec<(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)>>
                                 (&local_1a0);
            }
            bVar13 = 1;
            if (bVar9) {
              bVar13 = 1;
              goto LAB_004cad3f;
            }
            goto LAB_004cad6e;
          }
          if (plVar25 != (longlong *)0x0) {
            (*(code *)PTR___rust_dealloc_00798fc8)();
          }
          if (plVar17 != (longlong *)0x0) {
            (*(code *)PTR___rust_dealloc_00798fc8)();
          }
        }
      }
      plVar17 = local_228;
      pplVar21 = pplStack_230;
      LOCK();
      puVar1 = (ulonglong *)(param_2 + 0x378);
      uVar32 = *puVar1;
      *puVar1 = *puVar1 + 1;
      UNLOCK();
      if (local_228 == (longlong *)0x0) {
        local_e8 = &PTR_anon_572fb51faa0db1e51baf8d00d92dd3e9_2_llvm_7677212527096675952_0078bd30;
LAB_004cc20f:
        (*(code *)PTR_panic_const_rem_by_zero_007997d8)();
        goto LAB_004cc24b;
      }
      if ((uVar32 | (ulonglong)local_228) >> 0x20 == 0) {
        local_250 = (longlong *)((uVar32 & 0xffffffff) % ((ulonglong)local_228 & 0xffffffff));
      }
      else {
        local_250 = (longlong *)(uVar32 % (ulonglong)local_228);
      }
      local_220 = local_250;
      if (local_38 == '\0') {
        local_108._0_8_ = 0xffffffffffffffff;
        local_128 = DAT_00185280;
        lVar18 = 0;
        local_e8 = &PTR_anon_572fb51faa0db1e51baf8d00d92dd3e9_2_llvm_7677212527096675952_0078bd48;
        local_1f0 = local_250;
        do {
          pplVar21 = pplStack_230;
          if (local_228 == (longlong *)0x0) goto LAB_004cc20f;
          uVar32 = lVar18 + (longlong)local_250;
          if ((uVar32 | (ulonglong)local_228) >> 0x20 == 0) {
            plVar25 = (longlong *)((uVar32 & 0xffffffff) % ((ulonglong)local_228 & 0xffffffff));
          }
          else {
            plVar25 = (longlong *)(uVar32 % (ulonglong)local_228);
          }
          local_138 = plVar17;
          local_e0 = plVar25;
          <craggemini_core[66f3c71560d70857]::pool::AccountPool>::load_metrics
                    (&local_2a8,pplStack_230[(longlong)plVar25 * 2 + 1] + 2);
          bVar34 = plStack_290 <= local_2a8;
          plVar17 = pplVar21[(longlong)plVar25 * 2 + 1];
          <craggemini_core[66f3c71560d70857]::pool::AccountPool>::load_metrics
                    (&local_2a8,plVar17 + 2);
          plVar22 = plStack_290;
          plVar25 = local_298;
          local_140 = local_2a8;
          local_188._0_8_ = plVar17 + 0x20;
          LOCK();
          bVar35 = (int)plVar17[0x20] == 0;
          if (bVar35) {
            *(int *)(plVar17 + 0x20) = 1;
          }
          UNLOCK();
          if (!bVar35) {
            (*(code *)PTR_lock_contended_00798fe0)();
          }
          if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
            bVar14 = 0;
          }
          else {
            bVar14 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
            bVar14 = bVar14 ^ 1;
          }
          lVar28 = local_168 - plVar17[0x25];
          if (local_168 < (ulonglong)plVar17[0x25] || lVar28 == 0) {
            local_118._8_8_ = 0;
            local_118._0_8_ = plVar17[0x22];
          }
          else {
            auVar44._8_4_ = (int)((ulonglong)lVar28 >> 0x20);
            auVar44._0_8_ = lVar28;
            auVar44._12_4_ = DAT_00182b10._4_4_;
            dVar37 = ((auVar44._8_8_ - _UNK_00182568) +
                     ((double)CONCAT44((undefined4)DAT_00182b10,(int)lVar28) - _DAT_00182560)) /
                     _s__00185460;
            auVar58._0_8_ = (dVar37 / _s__00185430) * _DAT_00183f40 + (double)plVar17[0x21];
            auVar58._8_8_ = dVar37 * _UNK_00183f48 + (double)plVar17[0x22];
            auVar42 = minpd(auVar58,_s__00183ce0);
            *(undefined1 (*) [16])(plVar17 + 0x21) = auVar42;
            plVar17[0x25] = local_168;
            local_118._8_8_ = auVar42._8_8_;
            local_118._0_8_ = auVar42._8_8_;
          }
          uVar32 = plVar17[0x24];
          local_268 = _s__001854a8;
          dStack_260 = 0.0;
          if (uVar32 != 0) {
            lVar28 = 0;
            if (uVar32 <= local_168) {
              lVar28 = local_168 - uVar32;
            }
            auVar45._8_4_ = (int)((ulonglong)lVar28 >> 0x20);
            auVar45._0_8_ = lVar28;
            auVar45._12_4_ = DAT_00182b10._4_4_;
            dStack_260 = auVar45._8_8_ - _UNK_00182568;
            dVar37 = (dStack_260 +
                     ((double)CONCAT44((undefined4)DAT_00182b10,(int)lVar28) - _DAT_00182560)) /
                     _s__00185460;
            if (_s__00185430 <= dVar37) {
              dVar37 = _s__00185430;
            }
            local_268 = (longlong **)(dVar37 * _DAT_001852a8);
          }
          local_f8._0_8_ = plVar17[0x21];
          local_120 = (longlong **)plVar17[0x23];
          if (((bVar14 == 0) &&
              ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
             (cVar11 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar11 == '\0')) {
            *(undefined1 *)((longlong)plVar17 + 0x104) = 1;
          }
          LOCK();
          iVar16 = *(int *)local_188._0_8_;
          *(int *)local_188._0_8_ = 0;
          UNLOCK();
          if (iVar16 == 2) {
            (*(code *)PTR_wake_00799010)();
          }
          lVar28 = (longlong)plVar25 + (longlong)local_140;
          auVar46._8_4_ = (int)((ulonglong)lVar28 >> 0x20);
          auVar46._0_8_ = lVar28;
          auVar46._12_4_ = DAT_00182b10._4_4_;
          auVar51._0_8_ =
               (auVar46._8_8_ - _UNK_00182568) +
               ((double)CONCAT44((undefined4)DAT_00182b10,(int)lVar28) - _DAT_00182560);
          auVar51._8_8_ = local_118._0_8_;
          auVar47._8_4_ = (int)((ulonglong)plVar22 >> 0x20);
          auVar47._0_8_ = plVar22;
          auVar47._12_4_ = DAT_00182b10._4_4_;
          auVar59._0_8_ =
               (auVar47._8_8_ - _UNK_00182568) +
               ((double)CONCAT44((undefined4)DAT_00182b10,(int)plVar22) - _DAT_00182560);
          auVar59._8_8_ = _DAT_00183d58;
          auVar39 = divpd(auVar51,auVar59);
          uVar48 = (uint)((longlong)((ulonglong)(uint)(plVar22 == (longlong *)0x0) << 0x3f) >> 0x3f)
          ;
          auVar5._4_4_ = 0;
          auVar5._0_4_ = uVar48;
          iVar16 = (int)((longlong)((ulonglong)(auVar39._8_8_ < 0.0) << 0x3f) >> 0x3f);
          auVar5._8_4_ = iVar16;
          auVar5._12_4_ = 0;
          auVar60._4_4_ = uVar48;
          auVar60._0_4_ = uVar48;
          auVar60._8_4_ = iVar16;
          auVar60._12_4_ = iVar16;
          auVar52._8_8_ = 0;
          auVar52._0_8_ = _s__00185250;
          auVar42 = auVar5 << 0x20 & auVar52 | ~auVar60 & auVar39;
          dVar49 = auVar42._0_8_;
          auVar53._8_8_ = -(ulonglong)(_UNK_00182b88 < auVar42._8_8_);
          auVar53._0_8_ = -(ulonglong)(_s__00182b80 < dVar49);
          uVar48 = movmskpd((uint)(plVar22 == (longlong *)0x0),auVar53);
          dVar37 = DAT_00185350;
          if ((uVar48 & 2) == 0) {
            dVar37 = SUB168(~auVar60 & auVar39,8) * DAT_001852c8 * _DAT_001852c0;
          }
          dVar36 = DAT_001852c8;
          if ((uVar48 & 1) == 0) {
            dVar36 = dVar49 * _DAT_00185410;
          }
          uVar32 = CONCAT71(0,bVar34);
          dVar36 = ((double)local_268 +
                   dVar37 + (double)local_f8._0_8_ + (double)local_f8._0_8_ +
                   (double)local_120 * DAT_001852c8 * _s__00185348) - dVar36;
          if (uVar32 < (ulonglong)local_108._0_8_) {
            local_1f0 = local_e0;
            local_108._0_8_ = uVar32;
            dVar37 = dVar36;
            local_128 = dVar36;
          }
          else {
            dVar37 = local_128 + _DAT_001851f0;
            if (local_108._0_8_ == uVar32) {
              if (dVar37 < dVar36) {
                local_1f0 = local_e0;
                local_108._0_8_ = uVar32;
                local_128 = dVar36;
              }
            }
          }
          lVar18 = lVar18 + 1;
          plVar17 = (longlong *)((longlong)local_138 + -1);
        } while (plVar17 != (longlong *)0x0);
        plVar17 = local_228;
LAB_004cbdc5:
        plVar25 = local_1f0;
LAB_004cbde4:
        if (plVar17 <= plVar25) {
          (*(code *)PTR_panic_bounds_check_00799520)
                    (dVar37,&
                            PTR_anon_572fb51faa0db1e51baf8d00d92dd3e9_2_llvm_7677212527096675952_0078bd60
                    );
          goto LAB_004cc24b;
        }
      }
      else {
        if (local_38 != '\x02') {
          local_188._0_8_ = 0xffffffffffffffff;
          local_268 = pplStack_230;
          lVar18 = 0;
          plVar25 = (longlong *)0xffffffffffffffff;
          uVar32 = 0xffffffffffffffff;
          plVar22 = local_228;
          local_1f0 = local_250;
          do {
            uVar19 = lVar18 + (longlong)local_250;
            if ((uVar19 | (ulonglong)plVar17) >> 0x20 == 0) {
              plVar29 = (longlong *)((uVar19 & 0xffffffff) % ((ulonglong)plVar17 & 0xffffffff));
            }
            else {
              plVar29 = (longlong *)(uVar19 % (ulonglong)plVar17);
            }
            dVar37 = (double)<craggemini_core[66f3c71560d70857]::pool::AccountPool>::load_metrics
                                       (&local_2a8,local_268[(longlong)plVar29 * 2 + 1] + 2);
            if (plStack_290 == (longlong *)0x0) {
              plVar23 = (longlong *)0x2710;
            }
            else {
              uVar19 = (longlong)local_2a8 * 10000;
              if ((uVar19 | (ulonglong)plStack_290) >> 0x20 == 0) {
                uVar19 = (uVar19 & 0xffffffff) / ((ulonglong)plStack_290 & 0xffffffff);
              }
              else {
                uVar19 = uVar19 / (ulonglong)plStack_290;
              }
              plVar23 = (longlong *)0x0;
              if (uVar19 < 0x2711) {
                plVar23 = (longlong *)(10000 - uVar19);
              }
            }
            if (plStack_290 <= local_2a8) {
              plVar23 = local_298;
            }
            uVar19 = 0;
            if ((longlong *)(ulonglong)(plStack_2a0 != (longlong *)0x0) <= local_298) {
              uVar19 = (longlong)local_298 - (longlong)(ulonglong)(plStack_2a0 != (longlong *)0x0);
            }
            uVar27 = (ulonglong)(plStack_290 <= local_2a8);
            bVar34 = uVar27 < uVar32;
            if ((uVar32 == uVar27) && (bVar34 = plVar23 < plVar25, plVar23 == plVar25)) {
              if (uVar19 < (ulonglong)local_188._0_8_) goto LAB_004cbc8d;
            }
            else if (bVar34) {
LAB_004cbc8d:
              local_188._0_8_ = uVar19;
              uVar32 = uVar27;
              plVar25 = plVar23;
              local_1f0 = plVar29;
            }
            lVar18 = lVar18 + 1;
            plVar22 = (longlong *)((longlong)plVar22 + -1);
          } while (plVar22 != (longlong *)0x0);
          goto LAB_004cbdc5;
        }
        lVar18 = 0;
        plVar22 = local_228;
        do {
          bVar34 = plVar22 == (longlong *)0x0;
          plVar22 = (longlong *)((longlong)plVar22 + -1);
          if (bVar34) {
            plVar25 = (longlong *)resolve_target_for_model::_closure_14_(&local_238,&local_220);
            dVar37 = extraout_XMM0_Qa_00;
            goto LAB_004cbde4;
          }
          uVar32 = lVar18 + (longlong)local_250;
          if ((uVar32 | (ulonglong)plVar17) >> 0x20 == 0) {
            plVar25 = (longlong *)((uVar32 & 0xffffffff) % ((ulonglong)plVar17 & 0xffffffff));
          }
          else {
            plVar25 = (longlong *)(uVar32 % (ulonglong)plVar17);
          }
          <craggemini_core[66f3c71560d70857]::pool::AccountPool>::load_metrics
                    (&local_2a8,pplVar21[(longlong)plVar25 * 2 + 1] + 2);
          lVar18 = lVar18 + 1;
        } while (plStack_290 <= local_2a8);
      }
      pplVar21 = pplStack_230;
      plVar22 = pplStack_230[(longlong)plVar25 * 2];
      plVar25 = pplStack_230[(longlong)plVar25 * 2 + 1];
      LOCK();
      lVar18 = *plVar22;
      *plVar22 = *plVar22 + 1;
      UNLOCK();
      if (*plVar22 != 0 && SCARRY8(lVar18,1) == *plVar22 < 0) {
        LOCK();
        lVar18 = *plVar25;
        *plVar25 = *plVar25 + 1;
        UNLOCK();
        if (*plVar25 != 0 && SCARRY8(lVar18,1) == *plVar25 < 0) {
          local_2a8 = plVar22;
          plStack_2a0 = plVar25;
          if (bVar13 != 0) {
            record_sticky_account(param_2,param_7,param_8,plVar22[0x1e],plVar22[0x1f],local_50);
          }
          param_1 = local_130;
          local_130[1] = (longlong)plVar22;
          local_130[2] = (longlong)plVar25;
          *local_130 = -2;
          uVar38 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                   <[(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)]>
                             (pplVar21,plVar17);
          uVar20 = local_248._0_8_;
          if (local_238 != (longlong *)0x0) {
            (*(code *)PTR___rust_dealloc_00798fc8)(uVar38,8);
          }
          plVar17 = local_170;
          uVar20 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                   <[(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)]>
                             (uVar20,local_170);
          if (plVar17 != (longlong *)0x0) {
            uVar20 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar20,8);
          }
          if ((bVar33) &&
             (uVar20 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                       <[(u64,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)]>
                                 (local_1b0,local_1a8), local_1b8 != (longlong *)0x0)) {
            uVar20 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar20,8);
          }
          if ((bVar6) &&
             (uVar20 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                       <[(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)]>
                                 (pplStack_1c8,local_1c0), local_1d0 != (longlong *)0x0)) {
            uVar20 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar20,8);
          }
          if ((bVar7) &&
             (uVar20 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                       <[(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)]>
                                 (pplStack_1e0,local_1d8), local_1e8 != (longlong *)0x0)) {
            uVar20 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar20,8);
          }
          if ((bVar8) &&
             (uVar20 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                       <[(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)]>
                                 (pplStack_198,local_190), local_1a0 != (longlong *)0x0)) {
            uVar20 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar20,8);
          }
          if ((bVar9) &&
             (uVar20 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                       <[(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)]>
                                 (pplStack_158,local_150), local_160 != (longlong *)0x0)) {
            uVar20 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar20,8);
          }
          if (local_d8 == (longlong *)0xfffffffffffffffe) {
            return param_1;
          }
LAB_004cc02a:
          if ((local_d8 != (longlong *)0xffffffffffffffff) && (local_d8 != (longlong *)0x0)) {
            uVar20 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar20,1);
          }
          if ((lStack_c0 != -1) && (lStack_c0 != 0)) {
            (*(code *)PTR___rust_dealloc_00798fc8)(uVar20,1);
          }
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::
          <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::protocol::UpstreamErrorDetail>>>
                    (local_a8);
          return param_1;
        }
      }
LAB_004cc24b:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    plVar17 = (longlong *)
              <craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::get_by_env
                        (*(longlong *)(param_2 + 0x170) + 0x10,param_5,param_6);
    if (plVar17 == (longlong *)0x0) {
      *param_1 = -1;
      param_1[1] = (longlong)"env_not_found";
      param_1[2] = 0xd;
      param_1[3] = -1;
      param_1[4] = (longlong)"specified env_id not found";
      param_1[5] = 0x1a;
      goto LAB_004ca1c2;
    }
    local_220 = plVar17;
    if (plVar17[0x65] != 0) {
      uVar10 = <craggemini_core[66f3c71560d70857]::license::LicenseGate>::check
                         (plVar17[0x65] + 0x10);
      lVar18 = 0x4b;
      lVar28 = 0xf;
      switch(uVar10) {
      case 0:
        puVar26 = anon_63b06cc94833867f683611f039574387_227_llvm_6903579140370050947;
        lVar28 = 0x10;
        puVar30 = anon_63b06cc94833867f683611f039574387_226_llvm_6903579140370050947;
        break;
      case 1:
        puVar26 = anon_63b06cc94833867f683611f039574387_229_llvm_6903579140370050947;
        puVar30 = anon_63b06cc94833867f683611f039574387_228_llvm_6903579140370050947;
        break;
      case 2:
        lVar18 = 0x4c;
        puVar26 = anon_63b06cc94833867f683611f039574387_231_llvm_6903579140370050947;
        lVar28 = 0x15;
        puVar30 = anon_63b06cc94833867f683611f039574387_230_llvm_6903579140370050947;
        break;
      case 3:
        lVar18 = 0x37;
        puVar26 = anon_63b06cc94833867f683611f039574387_233_llvm_6903579140370050947;
        puVar30 = anon_63b06cc94833867f683611f039574387_232_llvm_6903579140370050947;
        break;
      case 4:
        lVar18 = 0x46;
        puVar26 = anon_63b06cc94833867f683611f039574387_235_llvm_6903579140370050947;
        lVar28 = 0x18;
        puVar30 = anon_63b06cc94833867f683611f039574387_234_llvm_6903579140370050947;
        break;
      case 5:
        lVar18 = 0x48;
        puVar26 = anon_63b06cc94833867f683611f039574387_237_llvm_6903579140370050947;
        lVar28 = 0x1c;
        puVar30 = anon_63b06cc94833867f683611f039574387_236_llvm_6903579140370050947;
        break;
      case 6:
        lVar18 = 99;
        puVar26 = anon_63b06cc94833867f683611f039574387_239_llvm_6903579140370050947;
        lVar28 = 0x14;
        puVar30 = anon_63b06cc94833867f683611f039574387_238_llvm_6903579140370050947;
        break;
      default:
        goto switchD_004c9fea_default;
      }
      *param_1 = -1;
      param_1[1] = (longlong)puVar30;
      param_1[2] = lVar28;
      param_1[3] = -1;
      param_1[4] = (longlong)puVar26;
      param_1[5] = lVar18;
      goto LAB_004cb0fc;
    }
switchD_004c9fea_default:
    <craggemini_core[66f3c71560d70857]::binding::BoundAccount>::assert_calibrated
              (&local_2a8,plVar17 + 2,*(undefined1 *)(param_2 + 0x16b),0);
    if (local_2a8 == (longlong *)0xfffffffffffffffe) {
      plVar17 = (longlong *)get_pool(param_2,local_220[0x1e],local_220[0x1f]);
      if (plVar17 != (longlong *)0x0) {
        local_d8 = plVar17;
        get_policy(&local_2a8,param_2);
        if ((param_7 != (longlong **)0x0) && (local_288._1_1_ != '\0')) {
          record_sticky_account(param_2,param_7,param_8,local_220[0x1e],local_220[0x1f],plStack_2a0)
          ;
        }
        goto LAB_004caf57;
      }
      goto LAB_004cafa3;
    }
  }
  else {
    plVar17 = (longlong *)
              <craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::get
                        (*(longlong *)(param_2 + 0x170) + 0x10,param_3,param_4);
    if (plVar17 == (longlong *)0x0) {
      *param_1 = -1;
      param_1[1] = (longlong)"account_not_found";
      param_1[2] = 0x11;
      param_1[3] = -1;
      param_1[4] = (longlong)"specified account_id not found";
      param_1[5] = 0x1e;
LAB_004ca1c2:
      param_1[6] = 0;
      *(undefined4 *)(param_1 + 7) = 0x6020194;
      return param_1;
    }
    local_220 = plVar17;
    if ((param_5 != 0) &&
       ((plVar17[0x22] != param_6 ||
        (iVar16 = (*(code *)PTR_bcmp_00799020)(extraout_XMM0_Qa,param_6), iVar16 != 0)))) {
      *param_1 = -1;
      param_1[1] = (longlong)"account_env_mismatch";
      param_1[2] = 0x14;
      param_1[3] = -1;
      param_1[4] = (longlong)"specified env_id does not match account_id strict binding";
      param_1[5] = 0x39;
      param_1[6] = 0;
      *(undefined4 *)(param_1 + 7) = 0x6020199;
      goto LAB_004cb10b;
    }
    if (plVar17[0x65] != 0) {
      uVar10 = <craggemini_core[66f3c71560d70857]::license::LicenseGate>::check
                         (plVar17[0x65] + 0x10);
      lVar18 = 0xf;
      lVar28 = 0x4b;
      switch(uVar10) {
      case 0:
        puVar26 = anon_63b06cc94833867f683611f039574387_226_llvm_6903579140370050947;
        lVar18 = 0x10;
        puVar30 = anon_63b06cc94833867f683611f039574387_227_llvm_6903579140370050947;
        break;
      case 1:
        puVar26 = anon_63b06cc94833867f683611f039574387_228_llvm_6903579140370050947;
        puVar30 = anon_63b06cc94833867f683611f039574387_229_llvm_6903579140370050947;
        break;
      case 2:
        puVar26 = anon_63b06cc94833867f683611f039574387_230_llvm_6903579140370050947;
        lVar18 = 0x15;
        puVar30 = anon_63b06cc94833867f683611f039574387_231_llvm_6903579140370050947;
        lVar28 = 0x4c;
        break;
      case 3:
        puVar26 = anon_63b06cc94833867f683611f039574387_232_llvm_6903579140370050947;
        puVar30 = anon_63b06cc94833867f683611f039574387_233_llvm_6903579140370050947;
        lVar28 = 0x37;
        break;
      case 4:
        puVar26 = anon_63b06cc94833867f683611f039574387_234_llvm_6903579140370050947;
        lVar18 = 0x18;
        puVar30 = anon_63b06cc94833867f683611f039574387_235_llvm_6903579140370050947;
        lVar28 = 0x46;
        break;
      case 5:
        puVar26 = anon_63b06cc94833867f683611f039574387_236_llvm_6903579140370050947;
        lVar18 = 0x1c;
        puVar30 = anon_63b06cc94833867f683611f039574387_237_llvm_6903579140370050947;
        lVar28 = 0x48;
        break;
      case 6:
        puVar26 = anon_63b06cc94833867f683611f039574387_238_llvm_6903579140370050947;
        lVar18 = 0x14;
        puVar30 = anon_63b06cc94833867f683611f039574387_239_llvm_6903579140370050947;
        lVar28 = 99;
        break;
      default:
        plVar17 = local_220;
        goto switchD_004ca07a_default;
      }
      *param_1 = -1;
      param_1[1] = (longlong)puVar26;
      param_1[2] = lVar18;
      param_1[3] = -1;
      param_1[4] = (longlong)puVar30;
      param_1[5] = lVar28;
LAB_004cb0fc:
      param_1[6] = 0;
      *(undefined4 *)(param_1 + 7) = 0x6020193;
      goto LAB_004cb10b;
    }
switchD_004ca07a_default:
    <craggemini_core[66f3c71560d70857]::binding::BoundAccount>::assert_calibrated
              (&local_2a8,plVar17 + 2,*(undefined1 *)(param_2 + 0x16b),0);
    if (local_2a8 == (longlong *)0xfffffffffffffffe) {
      plVar17 = (longlong *)get_pool(param_2,local_220[0x1e],local_220[0x1f]);
      if (plVar17 != (longlong *)0x0) {
        local_d8 = plVar17;
        get_policy(&local_2a8,param_2);
        if ((param_7 != (longlong **)0x0) && (local_288._1_1_ != '\0')) {
          record_sticky_account(param_2,param_7,param_8,local_220[0x1e],local_220[0x1f],plStack_2a0)
          ;
        }
LAB_004caf57:
        param_1[1] = (longlong)local_220;
        param_1[2] = (longlong)plVar17;
        *param_1 = -2;
        return param_1;
      }
LAB_004cafa3:
      *param_1 = -1;
      param_1[1] = (longlong)"account_pool_unavailable";
      param_1[2] = 0x18;
      param_1[3] = -1;
      param_1[4] = (longlong)"account pool unavailable";
      param_1[5] = 0x18;
      param_1[6] = 0;
      *(undefined4 *)(param_1 + 7) = 0x60201f7;
      goto LAB_004cb10b;
    }
  }
  param_1[6] = local_278;
  param_1[7] = lStack_270;
  param_1[4] = (longlong)local_288;
  param_1[5] = lStack_280;
  param_1[2] = (longlong)local_298;
  param_1[3] = (longlong)plStack_290;
  *param_1 = (longlong)local_2a8;
  param_1[1] = (longlong)plStack_2a0;
LAB_004cb10b:
  LOCK();
  *local_220 = *local_220 + -1;
  UNLOCK();
  if (*local_220 == 0) {
    <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>::
    drop_slow(&local_220);
  }
  return param_1;
LAB_004ca97c:
  uVar32 = uVar32 & *(ulonglong *)(lVar31 + -0x30);
  auVar39 = *(undefined1 (*) [16])(*(longlong *)(lVar31 + -0x38) + uVar32);
  auVar57[0] = -(auVar39[0] == auVar42[0]);
  auVar57[1] = -(auVar39[1] == auVar42[1]);
  auVar57[2] = -(auVar39[2] == auVar42[2]);
  auVar57[3] = -(auVar39[3] == auVar42[3]);
  auVar57[4] = -(auVar39[4] == auVar42[4]);
  auVar57[5] = -(auVar39[5] == auVar42[5]);
  auVar57[6] = -(auVar39[6] == auVar42[6]);
  auVar57[7] = -(auVar39[7] == auVar42[7]);
  auVar57[8] = -(auVar39[8] == auVar42[0]);
  auVar57[9] = -(auVar39[9] == auVar42[1]);
  auVar57[10] = -(auVar39[10] == auVar42[2]);
  auVar57[0xb] = -(auVar39[0xb] == auVar42[3]);
  auVar57[0xc] = -(auVar39[0xc] == auVar42[4]);
  auVar57[0xd] = -(auVar39[0xd] == auVar42[5]);
  auVar57[0xe] = -(auVar39[0xe] == auVar42[6]);
  auVar57[0xf] = -(auVar39[0xf] == auVar42[7]);
  uVar15 = (ushort)(SUB161(auVar57 >> 7,0) & 1) | (ushort)(SUB161(auVar57 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar57 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar57 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar57 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar57 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar57 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar57 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar57 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar57 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar57 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar57 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar57 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar57 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar57 >> 0x77,0) & 1) << 0xe | (ushort)(auVar57[0xf] >> 7) << 0xf;
  uVar48 = (uint)uVar15;
  while (uVar15 != 0) {
    uVar3 = 0;
    for (uVar4 = uVar48; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
      uVar3 = uVar3 + 1;
    }
    lVar28 = *(longlong *)(lVar31 + -0x38) +
             (uVar3 + uVar32 & *(ulonglong *)(lVar31 + -0x30)) * -0x20;
    if ((char)local_250 == *(char *)(lVar28 + -0x20)) {
      uVar32 = *(ulonglong *)(lVar28 + -0x18);
      plVar17 = (longlong *)0x0;
      if (local_168 <= uVar32) {
        plVar17 = (longlong *)(uVar32 - local_168);
      }
      goto LAB_004ca620;
    }
    uVar15 = (ushort)(uVar48 - 1) & (ushort)uVar48;
    uVar48 = CONCAT22((short)(uVar48 - 1 >> 0x10),uVar15);
  }
  auVar50[0] = -(auVar39[0] == -1);
  auVar50[1] = -(auVar39[1] == -1);
  auVar50[2] = -(auVar39[2] == -1);
  auVar50[3] = -(auVar39[3] == -1);
  auVar50[4] = -(auVar39[4] == -1);
  auVar50[5] = -(auVar39[5] == -1);
  auVar50[6] = -(auVar39[6] == -1);
  auVar50[7] = -(auVar39[7] == -1);
  auVar50[8] = -(auVar39[8] == -1);
  auVar50[9] = -(auVar39[9] == -1);
  auVar50[10] = -(auVar39[10] == -1);
  auVar50[0xb] = -(auVar39[0xb] == -1);
  auVar50[0xc] = -(auVar39[0xc] == -1);
  auVar50[0xd] = -(auVar39[0xd] == -1);
  auVar50[0xe] = -(auVar39[0xe] == -1);
  auVar50[0xf] = -(auVar39[0xf] == -1);
  if ((((((((((((((((SUB161(auVar50 >> 7,0) & 1) != 0 || (SUB161(auVar50 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar50 >> 0x17,0) & 1) != 0) || (SUB161(auVar50 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar50 >> 0x27,0) & 1) != 0) || (SUB161(auVar50 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar50 >> 0x37,0) & 1) != 0) || (SUB161(auVar50 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar50 >> 0x47,0) & 1) != 0) || (SUB161(auVar50 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar50 >> 0x57,0) & 1) != 0) || (SUB161(auVar50 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar50 >> 0x67,0) & 1) != 0) || (SUB161(auVar50 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar50 >> 0x77,0) & 1) != 0) || auVar50[0xf] < '\0') goto LAB_004ca61d;
  uVar32 = uVar32 + lVar18 + 0x10;
  lVar18 = lVar18 + 0x10;
  goto LAB_004ca97c;
}


