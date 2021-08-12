// annesburg.ysc @ L9044
bool func_306(var uParam0, vector3 vParam1, vector3 vParam4, bool bParam7, int iParam8)
{
  int iVar0;
  int iVar1;

  if (AUDIO::_0xD89504D9D7D5057D(&vParam1))
  {
    return true;
  }
  else if (func_386(uParam0, vParam1, iParam8, -1, 0, 0))
  {
    iVar0 = (*uParam0)[0 /*4*/];
    iVar1 = (*uParam0)[1 /*4*/];
    if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !func_199(iVar0, 0)) && (ENTITY::DOES_ENTITY_EXIST(iVar1) && !func_199(iVar1, 0)))
    {
      if (!func_146(vParam4))
      {
        TASK::TASK_LOOK_AT_COORD(iVar0, vParam4, 8000, 0, 51, 0);
        TASK::TASK_LOOK_AT_COORD(iVar1, vParam4, 8000, 0, 51, 0);
      }
      else if (bParam7)
      {
        PED::_0x62FDAD5E01D2DD47(iVar0, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 1, 0);
        TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar0, Global_35, 4000, -1f, -1f, -1f);
      }
    }
    return true;
  }
  return false;
}