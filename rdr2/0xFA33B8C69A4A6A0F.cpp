// act_bankrobbery01.ysc @ L22263
void func_604(vector3 vParam0, float fParam3, vector3 vParam4, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
  if (func_1079(&(fParam3->f_3), 1))
  {
    func_1080(fParam3);
    if (func_1081(vParam0, iParam8, 2.5f, fParam12, 1084227584 /* Float: 5f */))
    {
      func_1082();
    }
  }
  if (func_1083(vParam0, fParam3, iParam8))
  {
    if (func_1079(&(fParam3->f_3), 128))
    {
      func_1084(fParam3, vParam0, iParam7, iParam10);
    }
    CAM::SET_GAMEPLAY_COORD_HINT(vParam0 + vParam4, iParam9, iParam10, iParam11, 0);
    if (!func_1079(&(fParam3->f_3), 128))
    {
      func_1084(fParam3, vParam0, iParam7, iParam10);
    }
  }
}