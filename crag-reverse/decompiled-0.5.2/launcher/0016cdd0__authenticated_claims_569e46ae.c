// 0016cdd0 authenticated_claims

/* craggemini[b21da2d71f2da7a3]::license::authenticated_claims */

void __rustcall
craggemini[b21da2d71f2da7a3]::license::authenticated_claims
          (undefined8 *param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
          longlong param_5)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  int iVar13;
  int *piVar14;
  longlong lVar15;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined1 auVar17 [16];
  undefined8 local_300;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  ulonglong local_2d8;
  undefined8 local_2d0;
  ulonglong local_2c8;
  undefined8 local_2c0;
  ulonglong local_2b8;
  undefined8 local_2b0;
  undefined1 local_2a8;
  undefined2 local_2a0;
  undefined1 local_298;
  undefined4 local_297;
  undefined2 local_293;
  undefined8 local_291;
  undefined8 local_289;
  undefined8 local_281;
  undefined4 local_279;
  undefined4 uStack_275;
  undefined4 uStack_271;
  undefined4 uStack_26d;
  undefined4 local_269;
  undefined4 uStack_265;
  undefined4 uStack_261;
  undefined4 uStack_25d;
  undefined1 local_259;
  longlong local_258;
  undefined1 local_250;
  undefined7 uStack_24f;
  longlong local_248;
  undefined8 local_238;
  longlong local_230;
  longlong local_218;
  longlong local_200;
  longlong local_1e8;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_178;
  undefined8 local_170;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  undefined4 local_150;
  char local_148;
  char cStack_147;
  undefined2 uStack_146;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 local_128;
  
  if (0x10000 < param_3) {
LAB_0016ce69:
    *(undefined1 *)(param_1 + 1) = 3;
    *param_1 = 0xffffffffffffffff;
    return;
  }
  local_2e0 = 0;
  local_2c0 = 0;
  local_2b0 = 0x2e0000002e;
  local_2a8 = 1;
  local_2a0 = 1;
  local_2d8 = param_3;
  local_2d0 = param_2;
  local_2c8 = param_3;
  local_2b8 = param_3;
  auVar17 = <core[c0acaeba6ab4c2e0]::str::iter::SplitInternal<char>>::next(&local_2e0);
  piVar14 = auVar17._0_8_;
  if ((piVar14 == (int *)0x0 || auVar17._8_8_ != 6) ||
     ((short)piVar14[1] != 0x314c || *piVar14 != 0x47415243)) goto LAB_0016ce69;
  auVar17 = <core[c0acaeba6ab4c2e0]::str::iter::SplitInternal<char>>::next(&local_2e0);
  if (auVar17._0_8_ == 0) goto LAB_0016ce69;
  base64[729f3f786a952ed7]::engine::Engine::decode::inner::
  <base64[729f3f786a952ed7]::engine::general_purpose::GeneralPurpose>
            (&local_148,"",auVar17._0_8_,auVar17._8_8_);
  uVar9 = local_138;
  lVar7 = CONCAT44(uStack_144,CONCAT22(uStack_146,CONCAT11(cStack_147,local_148)));
  if (lVar7 == -1) goto LAB_0016ce69;
  uVar8 = CONCAT44(uStack_13c,uStack_140);
  auVar17 = <core[c0acaeba6ab4c2e0]::str::iter::SplitInternal<char>>::next(&local_2e0);
  uVar16 = extraout_XMM0_Da;
  if ((auVar17._0_8_ != 0) &&
     (uVar16 = base64[729f3f786a952ed7]::engine::Engine::decode::inner::
               <base64[729f3f786a952ed7]::engine::general_purpose::GeneralPurpose>
                         (&local_258,"",auVar17._0_8_,auVar17._8_8_), local_258 != -1)) {
    puVar5 = (undefined1 *)CONCAT71(uStack_24f,local_250);
    if (local_248 == 0x40) {
      uVar1 = *puVar5;
      local_300 = CONCAT44(CONCAT22(local_300._6_2_,*(undefined2 *)(puVar5 + 5)),
                           *(undefined4 *)(puVar5 + 1));
      uVar2 = *(undefined8 *)(puVar5 + 7);
      uVar3 = *(undefined8 *)(puVar5 + 0xf);
      uVar4 = *(undefined8 *)(puVar5 + 0x17);
      local_128 = puVar5[0x3f];
      local_138 = *(undefined8 *)(puVar5 + 0x2f);
      uStack_130 = *(undefined8 *)(puVar5 + 0x37);
      uVar16 = *(undefined4 *)(puVar5 + 0x1f);
      uStack_144 = *(undefined4 *)(puVar5 + 0x23);
      uStack_140 = *(undefined4 *)(puVar5 + 0x27);
      uStack_13c = *(undefined4 *)(puVar5 + 0x2b);
      local_148 = (char)uVar16;
      cStack_147 = (char)((uint)uVar16 >> 8);
      uStack_146 = (undefined2)((uint)uVar16 >> 0x10);
      if (local_258 != 0) {
        (*(code *)PTR___rust_dealloc_00219c40)(uVar16,1);
      }
      local_293 = local_300._4_2_;
      local_297 = (undefined4)local_300;
      local_279 = CONCAT22(uStack_146,CONCAT11(cStack_147,local_148));
      uStack_275 = uStack_144;
      uStack_271 = uStack_140;
      uStack_26d = uStack_13c;
      local_269 = (undefined4)local_138;
      uStack_265 = local_138._4_4_;
      uStack_261 = (undefined4)uStack_130;
      uStack_25d = uStack_130._4_4_;
      local_259 = local_128;
      local_298 = uVar1;
      local_291 = uVar2;
      local_289 = uVar3;
      local_281 = uVar4;
      lVar15 = <core[c0acaeba6ab4c2e0]::str::iter::SplitInternal<char>>::next(&local_2e0);
      uVar16 = extraout_XMM0_Da_00;
      if (lVar15 == 0) {
        cVar10 = verify_signature(param_4,"CRAG-LICENSE-V1",0x10,uVar8,uVar9,&local_298);
        if (cVar10 != -1) {
          *(char *)(param_1 + 1) = cVar10;
          *param_1 = 0xffffffffffffffff;
          uVar16 = extraout_XMM0_Da_01;
          goto joined_r0x0016d078;
        }
        local_2f0 = 0;
        uStack_2e8 = 0;
        local_300 = uVar8;
        uVar16 = serde_json[dc3825464c436029]::de::from_trait::
                 <serde_json[dc3825464c436029]::read::SliceRead,craggemini[b21da2d71f2da7a3]::license::Claims>
                           (&local_148,&local_300);
        lVar15 = CONCAT44(uStack_144,CONCAT22(uStack_146,CONCAT11(cStack_147,local_148)));
        if (lVar15 == -1) {
          uVar16 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                   <serde_json[dc3825464c436029]::error::Error>(CONCAT44(uStack_13c,uStack_140));
          goto LAB_0016d06a;
        }
        uVar1 = (undefined1)uStack_140;
        (*(code *)PTR_memcpy_00219c60)(uVar16,0x107);
        local_250 = uVar1;
        cVar10 = '\x03';
        cVar12 = '\x03';
        local_258 = lVar15;
        if ((((local_150._1_1_ != '\x01') || (local_248 != 10)) ||
            (plVar6 = (longlong *)CONCAT71(uStack_24f,uVar1),
            (short)plVar6[1] != 0x696e || *plVar6 != 0x696d656767617263)) ||
           (local_230 - 0x101U < 0xffffffffffffff00)) goto LAB_0016d1e7;
        cVar11 = <char_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in(local_238)
        ;
        if (((cVar11 == '\0') && (local_168 <= local_160)) && (local_160 < local_158)) {
          expires_at(&local_148,local_168,local_150);
          if (local_148 == '\x01') {
LAB_0016d1b9:
            cVar10 = cStack_147;
            goto LAB_0016d1c1;
          }
          if ((local_158 == CONCAT44(uStack_13c,uStack_140)) &&
             (cVar12 = <craggemini[b21da2d71f2da7a3]::license::MachineIdentity>::validate(param_5),
             cVar12 == -1)) {
            cVar10 = '\x04';
            cVar12 = '\x04';
            if (((local_218 != *(longlong *)(param_5 + 0x28)) ||
                (((iVar13 = (*(code *)PTR_bcmp_00219d38)(), iVar13 != 0 ||
                  (local_200 != *(longlong *)(param_5 + 0x40))) ||
                 (iVar13 = (*(code *)PTR_bcmp_00219d38)(), iVar13 != 0)))) ||
               (local_1e8 != *(longlong *)(param_5 + 0x58))) goto LAB_0016d1c1;
            iVar13 = (*(code *)PTR_bcmp_00219d38)();
            if (iVar13 == 0) {
              decode_hash(&local_148,local_1d8,local_1d0);
              if (((local_148 != '\x01') &&
                  (decode::<32:usize>(&local_148,local_1c0,local_1b8), local_148 != '\x01')) &&
                 ((decode::<12:usize>(&local_148,local_1a8,local_1a0), local_148 != '\x01' &&
                  ((decode::<32:usize>(&local_148,local_190,local_188), local_148 != '\x01' &&
                   (uVar16 = decode::<16:usize>(&local_148,local_178,local_170), local_148 != '\x01'
                   )))))) {
                uVar16 = (*(code *)PTR_memcpy_00219c60)(uVar16,0x110);
                goto joined_r0x0016d078;
              }
              goto LAB_0016d1b9;
            }
          }
        }
        else {
LAB_0016d1c1:
          cVar12 = cVar10;
        }
LAB_0016d1e7:
        *(char *)(param_1 + 1) = cVar12;
        *param_1 = 0xffffffffffffffff;
        uVar16 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                 <craggemini[b21da2d71f2da7a3]::license::Claims>(&local_258);
        goto joined_r0x0016d078;
      }
    }
    else if (local_258 != 0) {
      uVar16 = (*(code *)PTR___rust_dealloc_00219c40)(uVar16,1);
    }
  }
LAB_0016d06a:
  *(undefined1 *)(param_1 + 1) = 3;
  *param_1 = 0xffffffffffffffff;
joined_r0x0016d078:
  if (lVar7 == 0) {
    return;
  }
  (*(code *)PTR___rust_dealloc_00219c40)(uVar16,1);
  return;
}


