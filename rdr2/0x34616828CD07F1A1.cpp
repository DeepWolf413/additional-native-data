// act_caunc_rustling.ysc @ L12308
void func_262()
{
  if (iLocal_14 < 11 && iLocal_73 <= 0)
  {
    if ((((PED::IS_PED_SHOOTING(Global_35) || (func_29(iLocal_22, 0) && PED::IS_PED_SHOOTING(iLocal_22))) || (func_29(iLocal_27, 0) && PED::IS_PED_SHOOTING(iLocal_27))) || (func_29(iLocal_28, 0) && PED::IS_PED_SHOOTING(iLocal_28))) || FIRE::IS_EXPLOSION_IN_SPHERE(iLocal_1282, vLocal_929, 75f))
    {
      vLocal_1014 = { vLocal_929 };
      func_231(128);
    }
  }
}