// 000b83a0 slice_index_fail

/* core[c0acaeba6ab4c2e0]::slice::index::slice_index_fail */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::index::slice_index_fail
          (undefined8 ***param_1,undefined8 ***param_2,undefined8 ***param_3,undefined8 ***param_4)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  undefined8 ***local_38;
  undefined *local_30;
  undefined8 ***local_28;
  undefined *local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  pppuVar2 = param_3;
  pppuVar4 = param_1;
  if (param_3 < param_1) {
    local_38 = &local_10;
    local_30 = PTR_fmt_000c3b68;
    local_28 = &local_18;
    local_20 = PTR_fmt_000c3b68;
    pppuVar4 = (undefined8 ***)&DAT_0000b0d2;
    param_2 = &local_38;
    pppuVar2 = param_4;
    local_18 = param_3;
    local_10 = param_1;
    (*(code *)PTR_panic_fmt_000c3e90)();
  }
  local_18 = pppuVar2;
  pppuVar3 = param_2;
  if ((param_2 <= pppuVar2) && (param_2 < pppuVar4)) {
    local_38 = &local_10;
    local_30 = PTR_fmt_000c3b68;
    local_28 = &local_18;
    local_20 = PTR_fmt_000c3b68;
    pppuVar3 = &local_38;
    local_18 = param_2;
    local_10 = pppuVar4;
    (*(code *)PTR_panic_fmt_000c3e90)();
    local_18 = param_4;
  }
  local_38 = &local_10;
  local_30 = PTR_fmt_000c3b68;
  local_28 = &local_18;
  local_20 = PTR_fmt_000c3b68;
  local_10 = pppuVar3;
  (*(code *)PTR_panic_fmt_000c3e90)();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


