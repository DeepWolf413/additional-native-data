// event_area_appleseed_stg1.ysc @ L13192
void func_393()
{
  int iVar0;
  int iVar1;
  int iVar2;
  int iVar3;

  iVar0 = 0;
  while (iVar0 < 4)
  {
    iVar2 = (810 + iVar0);
    iVar3 = func_63(iVar2);
    iVar1 = func_681(iVar0);
    if (((OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_1014[iVar1]) && OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_1014[iVar1]) == 10) && (ENTITY::IS_ENTITY_DEAD(iVar3) || !PED::IS_PED_USING_ANY_SCENARIO(iVar3))) && !func_422(iVar1))
    {
      func_695(iVar1);
      func_466(iVar1, 0);
      if (!func_19(64) || iVar1 != 0)
      {
        func_264(iVar2, 0, 1, 0, 0);
      }
      func_696();
    }
    else
    {
      iVar0++;
    }
  }
}