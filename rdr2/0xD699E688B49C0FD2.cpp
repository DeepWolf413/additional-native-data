// gang2.ysc @ L73270
void func_1906()
{
  if (!PHYSICS::DOES_ROPE_EXIST(Local_524.f_136))
  {
    if ((ENTITY::DOES_ENTITY_EXIST(iLocal_386) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_458, false)) && ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_458) > 10.6f)
    {
      Local_524.f_136 = PHYSICS::_ADD_ROPE_2(ENTITY::GET_ENTITY_COORDS(iLocal_378[1], true, false) + vLocal_989, 0f, 1.571f, 0f, 7f, 0, true, 10, 0.008f);
      PHYSICS::_0xD699E688B49C0FD2(Local_524.f_136, 0.5f, 0.5f, 0.5f, 1);
      PHYSICS::_0x522FA3F490E2F7AC(Local_524.f_136, 0, 1);
      PHYSICS::_0x3900491C0D61ED4B(Local_524.f_136, 15f);
      PHYSICS::_0xB7469CB9AC3C0FD4(Local_524.f_136, iLocal_378[1], vLocal_989, 0, 0, 0);
      PHYSICS::_0x462FF2A432733A44(Local_524.f_136, iLocal_378[1], iLocal_386, vLocal_989, 0f, 0f, 0f, 0, 0);
      PHYSICS::START_ROPE_UNWINDING_FRONT(Local_524.f_136);
      PHYSICS::_0x1FC92BDBA1106BD2(Local_524.f_136, 0.5f);
      PHYSICS::_0xBB3E9B073E66C3C9(Local_524.f_136, 1, 1, 0, 1);
    }
  }
  if (!bLocal_992)
  {
    if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_458, false) && ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_458) > 12.1f)
    {
      PHYSICS::_0x1FC92BDBA1106BD2(Local_524.f_136, 3f);
      bLocal_992 = true;
    }
  }
}