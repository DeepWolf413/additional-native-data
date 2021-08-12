// beat_coach_robbery.ysc @ L4024
void func_94()
{
  if (!bLocal_703)
  {
    if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_479, false))
    {
      if (!bLocal_691)
      {
        if (fLocal_649 > 0.556866f)
        {
          VEHICLE::_0x9D12796EF4BF9EA9(iLocal_606);
          VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_606, 5, false, false);
          bLocal_700 = true;
          bLocal_691 = true;
        }
      }
    }
  }
  else if (!bLocal_691)
  {
    VEHICLE::_0x9D12796EF4BF9EA9(iLocal_606);
    VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_606, 5, false, false);
    bLocal_700 = true;
    bLocal_691 = true;
  }
}