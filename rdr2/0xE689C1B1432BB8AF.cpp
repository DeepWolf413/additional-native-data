// mob4.ysc @ L53590
bool func_1365()
{
  if (!func_429(iLocal_111, 0))
  {
    return false;
  }
  if (!func_1895())
  {
    return false;
  }
  if (!PED::_0xA0BC8FAED8CFEB3C(iLocal_111))
  {
    return false;
  }
  if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_134))
  {
    iLocal_134 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_PED_BONE("scr_mob4_leg_blood", iLocal_111, vLocal_59, vLocal_59, 43312, 1f, false, false, false);
  }
  func_1896(iLocal_111, -10496631);
  GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_134, "fade", 0f, false);
  PED::APPLY_PED_DAMAGE_PACK(iLocal_111, "PD_Mob4_Bitten_Leg_R", 0f, 1f);
  PED::APPLY_PED_DAMAGE_PACK(iLocal_111, "PD_Mob4_Bitten_Leg_Blood_Soak_R", 0f, 1f);
  func_1897(iLocal_111);
  return true;
}