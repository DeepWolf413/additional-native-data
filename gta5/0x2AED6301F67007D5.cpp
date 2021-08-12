// am_mp_armory_aircraft.ysc @ L307397
void func_4981(var uParam0)
{
  if (uParam0->f_71.f_4 == 6)
  {
  }
  else if (uParam0->f_71.f_4 > 4)
  {
    CAM::_DISABLE_CAM_COLLISION_FOR_ENTITY(PLAYER::PLAYER_PED_ID());
    PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), func_4982(uParam0));
    uParam0->f_71.f_7 = MISC::GET_FRAME_COUNT();
  }
  else if (uParam0->f_71.f_4 > 1)
  {
    PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), func_4982(uParam0));
    uParam0->f_71.f_7 = MISC::GET_FRAME_COUNT();
  }
  else if ((MISC::GET_FRAME_COUNT() - uParam0->f_71.f_7) < 5)
  {
    PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), func_4982(uParam0));
  }
}