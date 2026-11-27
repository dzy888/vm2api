// 001a77f0 fmt

/* WARNING: Switch with 1 destination removed at 0x001a7850 */
/* <serde_json[dc3825464c436029]::error::Error as core[c0acaeba6ab4c2e0]::fmt::Display>::fmt */

void __rustcall
<serde_json[dc3825464c436029]::error::Error_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt
          (undefined8 *param_1)

{
  longlong *local_30;
  undefined *local_28;
  longlong *local_20;
  undefined *local_18;
  longlong *local_10;
  undefined *local_8;
  
  local_30 = (longlong *)*param_1;
  if (local_30[3] == 0) {
                    /* WARNING: Could not recover jumptable at 0x001a7581. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_0011a7d0 + *(int *)(&DAT_0011a7d0 + *local_30 * 4)))();
    return;
  }
  local_20 = local_30 + 3;
  local_10 = local_30 + 4;
  local_28 = PTR_fmt_0021a488;
  local_18 = PTR_fmt_00219e40;
  local_8 = PTR_fmt_00219e40;
  (*(code *)PTR_write_0021a2e0)
            (&local_30,anon_59e2fb66b8c947e9c506f2bec78bddb3_37_llvm_10337461052197347093);
  return;
}


