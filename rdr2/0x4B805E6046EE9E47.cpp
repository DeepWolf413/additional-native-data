// dominoes_launch_sp.ysc @ L9809
int func_209(char* sParam0, char* sParam1, vector3 vParam2, vector3 vParam5, float fParam8, var uParam9, float fParam10)
{
  *fParam8 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(sParam0, sParam1, vParam2, vParam5, fParam10, 2) };
  *uParam9 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sParam0, sParam1, vParam2, vParam5, fParam10, 2) };
  return 1;
}