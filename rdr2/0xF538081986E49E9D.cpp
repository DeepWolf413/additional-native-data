// beat_bandito_execution.ysc @ L2504
bool func_75(var uParam0)
{
  vector3 vVar0;

  if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
  {
    vVar0 = { -5527.651f, -2930.554f, -2.33006f };
    OBJECT::SET_FORCE_OBJECT_THIS_FRAME(vVar0, 4f);
    if (!ENTITY::DOES_ENTITY_EXIST(iLocal_594) || !ENTITY::IS_ENTITY_AN_OBJECT(iLocal_594))
    {
      iLocal_594 = func_78(iLocal_593, 0);
    }
    else
    {
      *uParam0 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iLocal_594);
    }
  }
  return ENTITY::DOES_ENTITY_EXIST(*uParam0);
}