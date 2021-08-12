// barry3.ysc @ L34879
void func_236(bool bParam0)
{
  if (ENTITY::DOES_ENTITY_EXIST(Local_81.f_41[0]))
  {
    if (bParam0)
    {
      if (!ENTITY::IS_ENTITY_ATTACHED(Local_81.f_41[0]))
      {
        ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_81.f_41[0], iLocal_147, PED::GET_PED_BONE_INDEX(iLocal_147, 60309), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true);
      }
    }
    else if (ENTITY::IS_ENTITY_ATTACHED(Local_81.f_41[0]))
    {
      ENTITY::DETACH_ENTITY(Local_81.f_41[0], true, true);
      ENTITY::SET_ENTITY_HAS_GRAVITY(Local_81.f_41[0], true);
    }
  }
}