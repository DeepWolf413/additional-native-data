// fillet_launch_sp.ysc @ L828
void func_35(vector3 vParam0, var uParam3)
{
  vector3 vVar0;
  var uVar3;
  var uVar4;
  int iVar5;
  float fVar6;

  Global_1900325.f_5 = { vParam0 };
  Global_1900325.f_8 = uParam3;
  vVar0 = { Global_1900325.f_5 };
  vVar0.f_2 = (vVar0.z + 0.1f);
  iVar5 = MISC::_0xBBE5B63EFFB08E68(vVar0, 17, &(vVar0.f_2), &uVar3, &uVar4);
  if (iVar5 == 1)
  {
    fVar6 = (Global_1900325.f_5.f_2 - vVar0.z);
    if (fVar6 > 0.1f || fVar6 < -0.1f)
    {
    }
    else
    {
      Global_1900325.f_5.f_2 = vVar0.z;
    }
  }
}