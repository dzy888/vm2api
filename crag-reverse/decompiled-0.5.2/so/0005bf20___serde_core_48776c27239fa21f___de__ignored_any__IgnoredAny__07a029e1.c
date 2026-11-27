// 0005bf20 <serde_core[48776c27239fa21f]::de::ignored_any::IgnoredAny>

/* <serde_json[dc3825464c436029]::de::MapAccess<serde_json[dc3825464c436029]::read::SliceRead> as
   serde_core[48776c27239fa21f]::de::MapAccess>::next_value::<serde_core[48776c27239fa21f]::de::ignored_any::IgnoredAny>
    */

longlong __rustcall
<serde_json[dc3825464c436029]::de::MapAccess<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::MapAccess>
::next_value::<serde_core[48776c27239fa21f]::de::ignored_any::IgnoredAny>(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  code *pcVar4;
  bool bVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  byte bVar10;
  ulonglong unaff_RBP;
  ulonglong uVar11;
  uint uVar12;
  undefined8 local_48 [3];
  
  uVar9 = param_1[4];
  uVar6 = param_1[5];
  if (uVar6 < uVar9) {
    lVar8 = param_1[3];
    do {
      uVar6 = uVar6 + 1;
      uVar11 = (ulonglong)*(byte *)(lVar8 + -1 + uVar6);
      if (0x3a < uVar11) goto LAB_0005c461;
      if ((0x100002600U >> (uVar11 & 0x3f) & 1) == 0) {
        if (uVar11 != 0x3a) goto LAB_0005c461;
        param_1[5] = uVar6;
        param_1[2] = 0;
        if (uVar9 <= uVar6) goto LAB_0005c3fa;
        uVar12 = 0;
        goto LAB_0005bfda;
      }
      param_1[5] = uVar6;
    } while (uVar6 != uVar9);
  }
LAB_0005bf7e:
  local_48[0] = 3;
LAB_0005c43d:
  lVar8 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          ::peek_error(param_1,local_48);
  return lVar8;
LAB_0005c2f0:
  if (bVar5) {
    local_48[0] = 7;
    if (bVar10 != 0x5b) {
      if (((uint)unaff_RBP & 0xff) != 0x7b) {
LAB_0005c4b3:
        (*(code *)PTR_panic_000c3b00)();
        pcVar4 = (code *)swi(3);
        lVar8 = (*pcVar4)();
        return lVar8;
      }
      local_48[0] = 8;
    }
    goto LAB_0005c43d;
  }
LAB_0005c30d:
  if (bVar10 == 0x7b) {
    if (uVar9 <= uVar6) goto LAB_0005bf7e;
    while( true ) {
      uVar6 = uVar6 + 1;
      uVar11 = (ulonglong)*(byte *)(lVar8 + -1 + uVar6);
      if (0x22 < uVar11) goto LAB_0005c486;
      if ((0x100002600U >> (uVar11 & 0x3f) & 1) == 0) break;
      param_1[5] = uVar6;
      if (uVar6 == uVar9) goto LAB_0005bf7e;
    }
    if (uVar11 != 0x22) {
LAB_0005c486:
      local_48[0] = 0x11;
      goto LAB_0005c43d;
    }
    param_1[5] = uVar6;
    lVar8 = (*(code *)PTR_ignore_str_000c3d40)();
    if (lVar8 != 0) {
      return lVar8;
    }
    uVar9 = param_1[4];
    uVar6 = param_1[5];
    if (uVar9 <= uVar6) goto LAB_0005bf7e;
    lVar8 = param_1[3];
    while( true ) {
      uVar6 = uVar6 + 1;
      uVar11 = (ulonglong)*(byte *)(lVar8 + -1 + uVar6);
      if (0x3a < uVar11) goto LAB_0005c461;
      if ((0x100002600U >> (uVar11 & 0x3f) & 1) == 0) break;
      param_1[5] = uVar6;
      if (uVar6 == uVar9) goto LAB_0005bf7e;
    }
    if (uVar11 != 0x3a) goto LAB_0005c461;
    param_1[5] = uVar6;
  }
  uVar12 = 1;
  if (uVar9 <= uVar6) goto LAB_0005c3fa;
  goto LAB_0005bfda;
LAB_0005c461:
  local_48[0] = 6;
  goto LAB_0005c43d;
LAB_0005c3fa:
  local_48[0] = 5;
  goto LAB_0005c43d;
LAB_0005bfda:
  lVar7 = uVar6 + 5;
  while( true ) {
    bVar10 = *(byte *)(lVar8 + -5 + lVar7);
    uVar11 = (ulonglong)bVar10;
    if (0x2d < uVar11) break;
    if ((0x100002600U >> (uVar11 & 0x3f) & 1) == 0) {
      if (uVar11 == 0x22) {
        param_1[5] = lVar7 + -4;
        lVar8 = (*(code *)PTR_ignore_str_000c3d40)();
        goto LAB_0005c215;
      }
      if (uVar11 == 0x2d) {
        param_1[5] = lVar7 + -4;
        goto LAB_0005c20d;
      }
      break;
    }
    param_1[5] = lVar7 + -4;
    lVar1 = lVar7 - uVar9;
    lVar7 = lVar7 + 1;
    if (lVar1 == 4) goto LAB_0005c3fa;
  }
  switch(bVar10) {
  case 0x5b:
  case 0x7b:
    lVar8 = param_1[2];
    if ((ulonglong)(*param_1 - lVar8) < (ulonglong)uVar12) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(param_1,lVar8,(ulonglong)uVar12,1,1);
      lVar8 = param_1[2];
    }
    if (uVar12 != 0) {
      *(char *)(param_1[1] + lVar8) = (char)unaff_RBP;
      lVar8 = lVar8 + 1;
    }
    param_1[2] = lVar8;
    param_1[5] = param_1[5] + 1;
    bVar5 = false;
    uVar9 = param_1[4];
    uVar6 = param_1[5];
    unaff_RBP = uVar11;
    if (uVar6 < uVar9) goto LAB_0005c270;
    goto LAB_0005c420;
  default:
    if ((byte)(bVar10 - 0x30) < 10) {
LAB_0005c20d:
      lVar8 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
              ::ignore_integer(param_1);
LAB_0005c215:
      if (lVar8 != 0) {
        return lVar8;
      }
LAB_0005c21e:
      bVar5 = true;
      if (uVar12 == 0) {
        lVar8 = param_1[2];
        if (lVar8 == 0) {
          return 0;
        }
        param_1[2] = lVar8 + -1;
        bVar10 = *(byte *)(param_1[1] + -1 + lVar8);
        uVar9 = param_1[4];
        uVar6 = param_1[5];
        unaff_RBP = (ulonglong)bVar10;
        if (uVar6 < uVar9) goto LAB_0005c270;
      }
      else {
        bVar10 = (byte)(unaff_RBP & 0xffffffff);
        uVar9 = param_1[4];
        uVar6 = param_1[5];
        unaff_RBP = unaff_RBP & 0xffffffff;
        if (uVar6 < uVar9) {
LAB_0005c270:
          lVar8 = param_1[3];
          lVar7 = param_1[2];
LAB_0005c280:
          do {
            bVar3 = *(byte *)(lVar8 + uVar6);
            uVar11 = (ulonglong)bVar3;
            bVar10 = (byte)unaff_RBP;
            if (uVar11 < 0x2d) {
              if ((0x100002600U >> (uVar11 & 0x3f) & 1) != 0) {
                uVar6 = uVar6 + 1;
                param_1[5] = uVar6;
                if (uVar9 == uVar6) break;
                goto LAB_0005c280;
              }
              if (uVar11 == 0x2c) {
                if (bVar5) {
                  uVar6 = uVar6 + 1;
                  param_1[5] = uVar6;
                }
                goto LAB_0005c30d;
              }
            }
            if (bVar3 == 0x5d) {
              if (bVar10 != 0x5b) goto LAB_0005c2f0;
            }
            else if ((bVar3 != 0x7d) || (bVar10 != 0x7b)) goto LAB_0005c2f0;
            uVar6 = uVar6 + 1;
            param_1[5] = uVar6;
            if (lVar7 == 0) {
              return 0;
            }
            param_1[2] = lVar7 + -1;
            bVar10 = *(byte *)(param_1[1] + -1 + lVar7);
            unaff_RBP = (ulonglong)bVar10;
            bVar5 = true;
            lVar7 = lVar7 + -1;
            if (uVar9 <= uVar6) break;
          } while( true );
        }
      }
LAB_0005c420:
      local_48[0] = 2;
      if (bVar10 != 0x5b) {
        if (bVar10 != 0x7b) {
          (*(code *)PTR_panic_000c3b00)(uVar9,&PTR_s__vendor_serde_json_1_0_154_src_d_000c0218);
          goto LAB_0005c4b3;
        }
        local_48[0] = 3;
      }
    }
    else {
      local_48[0] = 10;
    }
    goto LAB_0005c43d;
  case 0x66:
    param_1[5] = lVar7 - 4U;
    if (lVar7 - 4U < uVar9) {
      cVar2 = *(char *)(lVar8 + -4 + lVar7);
      param_1[5] = lVar7 - 3U;
      if (cVar2 != 'a') goto LAB_0005c457;
      if (lVar7 - 3U < uVar9) {
        cVar2 = *(char *)(lVar8 + -3 + lVar7);
        param_1[5] = lVar7 - 2U;
        if (cVar2 != 'l') goto LAB_0005c457;
        if (lVar7 - 2U < uVar9) {
          cVar2 = *(char *)(lVar8 + -2 + lVar7);
          param_1[5] = lVar7 - 1U;
          if (cVar2 != 's') goto LAB_0005c457;
          if (lVar7 - 1U < uVar9) {
            cVar2 = *(char *)(lVar8 + -1 + lVar7);
            goto LAB_0005c174;
          }
        }
      }
    }
    break;
  case 0x6e:
    param_1[5] = lVar7 - 4U;
    if (lVar7 - 4U < uVar9) {
      cVar2 = *(char *)(lVar8 + -4 + lVar7);
      param_1[5] = lVar7 - 3U;
      if (cVar2 == 'u') {
        if (uVar9 <= lVar7 - 3U) break;
        cVar2 = *(char *)(lVar8 + -3 + lVar7);
        param_1[5] = lVar7 - 2U;
        if (cVar2 == 'l') {
          if (uVar9 <= lVar7 - 2U) break;
          cVar2 = *(char *)(lVar8 + -2 + lVar7);
          param_1[5] = lVar7 + -1;
          if (cVar2 == 'l') goto LAB_0005c21e;
        }
      }
LAB_0005c457:
      local_48[0] = 9;
      goto LAB_0005c410;
    }
    break;
  case 0x74:
    param_1[5] = lVar7 - 4U;
    if (lVar7 - 4U < uVar9) {
      cVar2 = *(char *)(lVar8 + -4 + lVar7);
      param_1[5] = lVar7 - 3U;
      if (cVar2 == 'r') {
        if (uVar9 <= lVar7 - 3U) break;
        cVar2 = *(char *)(lVar8 + -3 + lVar7);
        param_1[5] = lVar7 - 2U;
        if (cVar2 == 'u') {
          if (uVar9 <= lVar7 - 2U) break;
          cVar2 = *(char *)(lVar8 + -2 + lVar7);
          lVar7 = lVar7 + -1;
LAB_0005c174:
          param_1[5] = lVar7;
          if (cVar2 == 'e') goto LAB_0005c21e;
        }
      }
      goto LAB_0005c457;
    }
  }
  local_48[0] = 5;
LAB_0005c410:
  lVar8 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          ::error(param_1,local_48);
  return lVar8;
}


