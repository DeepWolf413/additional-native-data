// business_battles_sell.ysc @ L350004
void func_5769(int iParam0, int iParam1)
{
  if (func_6471() != 4 || func_6620() != 19)
  {
    return;
  }
  if (!func_14(NETWORK::PARTICIPANT_ID(), 34) && !func_6470(45))
  {
    if (iParam0 == 0 && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
    {
      if (func_5770(iParam1))
      {
        GRAPHICS::SET_PARTICLE_FX_LOOPED_ALPHA(iLocal_5214, 0.3f);
        func_6578(34);
      }
    }
  }
  else if (func_43())
  {
    if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_5214))
    {
      GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_5214, false);
    }
  }
}