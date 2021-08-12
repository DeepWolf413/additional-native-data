// bounty1.ysc @ L36794
bool func_859(var uParam0)
{
  if (func_33(uParam0) < 2)
  {
    if (!ENTITY::DOES_ENTITY_EXIST(iLocal_119))
    {
      iLocal_119 = OBJECT::CREATE_OBJECT(iLocal_20, func_372(0, 6), true, true, false, false, true);
      return false;
    }
    ENTITY::FREEZE_ENTITY_POSITION(iLocal_119, true);
    ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_119, iLocal_113, false);
    ENTITY::CREATE_MODEL_HIDE_EXCLUDING_SCRIPT_OBJECTS(func_372(0, 6), 0.5f, iLocal_20, false);
  }
  return true;
}