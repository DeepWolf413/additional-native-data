// beat_arms_deal.ysc @ L12065
void func_375(int iParam0, int* iParam1)
{
  if (!func_34(iLocal_35[iParam0], 0, 1))
  {
    return;
  }
  if (!MAP::DOES_BLIP_EXIST(*iParam1))
  {
    func_349(iLocal_35[iParam0], iParam1, joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
  }
  if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[iParam0], -2117564886, true) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[iParam0], -2117564886, true) == 0)
  {
    return;
  }
  if (func_308(iLocal_35[iParam0], 0) == joaat("WEAPON_UNARMED"))
  {
    WEAPON::SET_CURRENT_PED_WEAPON(iLocal_35[iParam0], func_258(iParam0), false, 0, false, false);
  }
  TASK::TASK_COMBAT_HATED_TARGETS(iLocal_35[iParam0], -1f);
}