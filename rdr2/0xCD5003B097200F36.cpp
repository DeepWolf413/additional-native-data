// homeinvasion.ysc @ L11169
void func_321(int iParam0, bool bParam1)
{
  vector3 vVar0;

  if (bParam1)
  {
    vVar0 = { PED::GET_DEAD_PED_PICKUP_COORDS(Local_268.f_960[iParam0 /*149*/], 1.2f, 1.5f) };
    Local_268.f_960[iParam0 /*149*/].f_121 = { vVar0.x, vVar0.y, (vVar0.z + 1f) };
    func_85(268435456, iParam0, 1);
  }
  else
  {
    vVar0 = { PED::GET_DEAD_PED_PICKUP_COORDS(Local_268.f_208[iParam0 /*149*/], 1.2f, 1.5f) };
    Local_268.f_208[iParam0 /*149*/].f_121 = { vVar0.x, vVar0.y, (vVar0.z + 1f) };
    func_85(268435456, iParam0, 0);
  }
}