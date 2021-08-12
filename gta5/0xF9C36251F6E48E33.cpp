// fbi4_prep3.ysc @ L5599
void func_94()
{
  if (!OBJECT::DOES_PICKUP_OF_TYPE_EXIST_IN_AREA(joaat("pickup_weapon_petrolcan"), Local_166, 10f))
  {
    if (!HUD::DOES_BLIP_EXIST(iLocal_164))
    {
      if (func_102(Global_95867[0]))
      {
        iLocal_164 = func_95(Global_95867[0], 0, 0);
        func_103("PRC_GAS");
      }
    }
  }
  else
  {
    func_22(&iLocal_164);
  }
}