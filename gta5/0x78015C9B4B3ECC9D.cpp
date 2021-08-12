// fm_deathmatch_controler.ysc @ L310364
void func_4525(var uParam0, int iParam1)
{
  if (!OBJECT::DOES_PICKUP_EXIST(uParam0->f_3876[iParam1]))
  {
    return;
  }
  OBJECT::SET_PICKUP_REGENERATION_TIME(uParam0->f_3876[iParam1], func_4526(func_4510(iParam1)));
}