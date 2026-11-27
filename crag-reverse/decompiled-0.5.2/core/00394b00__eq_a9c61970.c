// 00394b00 eq

/* <serde_json[dc3825464c436029]::value::Value as core[c0acaeba6ab4c2e0]::cmp::PartialEq>::eq */

bool __rustcall
<serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::cmp::PartialEq>::eq
          (char *param_1,char *param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
  if (*param_1 != *param_2) {
    return false;
  }
  bVar7 = true;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case '\x01':
    bVar7 = param_1[1] == param_2[1];
    break;
  case '\x02':
    if (*(longlong *)(param_1 + 8) != *(longlong *)(param_2 + 8)) {
      return false;
    }
    if ((int)*(longlong *)(param_1 + 8) == 2) {
      return (bool)(-(*(double *)(param_2 + 0x10) == *(double *)(param_1 + 0x10)) & 1);
    }
    bVar7 = *(longlong *)(param_1 + 0x10) == *(longlong *)(param_2 + 0x10);
    break;
  case '\x03':
    if (*(longlong *)(param_1 + 0x18) != *(longlong *)(param_2 + 0x18)) {
      return false;
    }
    iVar3 = (*(code *)PTR_bcmp_00799020)();
    bVar7 = iVar3 == 0;
    break;
  case '\x04':
    lVar6 = *(longlong *)(param_1 + 0x18);
    if (lVar6 != *(longlong *)(param_2 + 0x18)) {
      return false;
    }
    if (lVar6 == 0) {
      return true;
    }
    lVar4 = *(longlong *)(param_2 + 0x10);
    lVar5 = *(longlong *)(param_1 + 0x10);
    do {
      lVar6 = lVar6 + -1;
      cVar1 = eq(lVar5,lVar4);
      if (cVar1 == '\0') {
        return false;
      }
      lVar4 = lVar4 + 0x20;
      lVar5 = lVar5 + 0x20;
    } while (lVar6 != 0);
    return (bool)cVar1;
  case '\x05':
    uVar2 = <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>as_core[c0acaeba6ab4c2e0]::cmp::PartialEq>
            ::eq(param_1 + 8,param_2 + 8);
    return (bool)uVar2;
  }
  return bVar7;
}


