// beat_bear_trap.ysc @ L6368
void func_189()
{
  if (!ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(Local_232, false))
  {
    return;
  }
  if (!func_52(&uLocal_935))
  {
    if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_232, "whiskey"))
    {
      func_58(&uLocal_935);
    }
  }
  else if (func_403(&uLocal_935, 0.5f))
  {
    if (!ENTITY::IS_ENTITY_DEAD(iLocal_848))
    {
      OBJECT::_0xFFB99FFD17F65889(iLocal_848, 1f);
    }
  }
}