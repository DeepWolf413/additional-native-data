// act_caunc_rustling.ysc @ L27140
bool func_671(int iParam0)
{
  if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
  {
    return false;
  }
  if (ENTITY::GET_ENTITY_HEALTH(*iParam0) <= 0)
  {
    PHYSICS::SET_DISABLE_BREAKING(*iParam0, false);
    OBJECT::_0xE7E4C198B0185900(*iParam0, 0, false);
    OBJECT::_0xE7E4C198B0185900(*iParam0, 1, false);
    return true;
  }
  if (OBJECT::HAS_OBJECT_BEEN_BROKEN(*iParam0))
  {
    OBJECT::_0xE7E4C198B0185900(*iParam0, 0, false);
    OBJECT::_0xE7E4C198B0185900(*iParam0, 1, false);
    return true;
  }
  return false;
}