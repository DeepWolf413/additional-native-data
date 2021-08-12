// braithwaites3.ysc @ L55385
void func_1325()
{
  int iVar0;
  vector3 vVar1;
  float fVar4;

  iVar0 = 0;
  while (iVar0 < 38)
  {
    if (((!func_1293(iVar0) && ENTITY::DOES_ENTITY_EXIST(Local_172[iVar0 /*10*/])) && !func_974(Local_172[iVar0 /*10*/], 2)) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_172[iVar0 /*10*/], 1011.098f, -1761.953f, 45.60394f, 1011.141f, -1743.213f, 49.3185f, 5.5f, false, true, 0))
    {
      func_1743(&vVar1, &fVar4);
      if (ENTITY::IS_ENTITY_DEAD(Local_172[iVar0 /*10*/]))
      {
        PED::RESURRECT_PED(Local_172[iVar0 /*10*/]);
      }
      else
      {
        TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_172[iVar0 /*10*/], false, true);
      }
      func_903(Local_172[iVar0 /*10*/], vVar1, fVar4, 2, 1073741824 /* Float: 2f */);
      func_1460(Local_172[iVar0 /*10*/]);
    }
    iVar0++;
  }
}