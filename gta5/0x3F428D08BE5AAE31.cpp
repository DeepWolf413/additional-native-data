// agency_heist3a.ysc @ L105831
void func_578(var uParam0)
{
  if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_8))
  {
    OBJECT::DELETE_OBJECT(&(uParam0->f_8));
  }
  if (!PED::IS_PED_INJURED(uParam0->f_3))
  {
    uParam0->f_8 = OBJECT::CREATE_OBJECT(func_579(), ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true), true, true, false);
    ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_8, uParam0->f_3, PED::GET_PED_BONE_INDEX(uParam0->f_3, 60309), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true);
  }
}