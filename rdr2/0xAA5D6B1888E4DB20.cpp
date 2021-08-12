// beat_murder_campfire.ysc @ L3471
void func_113()
{
  if (ENTITY::DOES_ENTITY_EXIST(iLocal_15[0]))
  {
    if (PHYSICS::DOES_ROPE_EXIST(iLocal_511))
    {
      if (PHYSICS::_0x9B4F7E3E4F9C77B3(iLocal_511, iLocal_15[0]))
      {
        if ((PED::_0xBA208A8D6399A3AC(iLocal_15[0], 8) || PED::_0xBA208A8D6399A3AC(iLocal_15[0], 6)) || PED::_0xBA208A8D6399A3AC(iLocal_15[0], 7))
        {
          PHYSICS::DETACH_ROPE_FROM_ENTITY(iLocal_511, iLocal_15[0]);
          PHYSICS::DELETE_CHILD_ROPE(iLocal_511);
          func_82(&iLocal_528, 67108864);
        }
      }
    }
    if (PHYSICS::DOES_ROPE_EXIST(iLocal_510))
    {
      if (PHYSICS::_0x9B4F7E3E4F9C77B3(iLocal_510, iLocal_15[0]))
      {
        if ((PED::_0xBA208A8D6399A3AC(iLocal_15[0], 5) || PED::_0xBA208A8D6399A3AC(iLocal_15[0], 3)) || PED::_0xBA208A8D6399A3AC(iLocal_15[0], 4))
        {
          PHYSICS::DETACH_ROPE_FROM_ENTITY(iLocal_510, iLocal_15[0]);
          PHYSICS::DELETE_CHILD_ROPE(iLocal_510);
          func_82(&iLocal_528, 67108864);
        }
      }
    }
  }
}