// am_mp_property_ext.ysc @ L319946
int func_4748()
{
  if (func_4684())
  {
    if (!func_4749())
    {
      if (func_3030(Local_456.f_14))
      {
        iLocal_484 = OBJECT::CREATE_OBJECT_NO_OFFSET(Local_456.f_14, Local_456.f_8, false, false, true);
        ENTITY::SET_ENTITY_ROTATION(iLocal_484, Local_456.f_11, 2, true);
        ENTITY::FREEZE_ENTITY_POSITION(iLocal_484, true);
        ENTITY::SET_ENTITY_PROOFS(iLocal_484, true, true, true, true, true, true, false, false);
        ENTITY::SET_ENTITY_INVINCIBLE(iLocal_484, true);
        ENTITY::SET_ENTITY_DYNAMIC(iLocal_484, false);
        PHYSICS::SET_DISABLE_FRAG_DAMAGE(iLocal_484, true);
        PHYSICS::SET_DISABLE_BREAKING(iLocal_484, true);
        STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_456.f_14);
        return 1;
      }
      return 0;
    }
  }
  else if (ENTITY::DOES_ENTITY_EXIST(iLocal_484))
  {
    OBJECT::DELETE_OBJECT(&iLocal_484);
  }
  return 1;
}