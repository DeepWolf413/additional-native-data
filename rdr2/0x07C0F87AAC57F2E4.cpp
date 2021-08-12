// braithwaites1.ysc @ L63779
void func_1421(int iParam0, int iParam1)
{
  int iVar0;
  int iVar1;
  int iVar2;
  struct<4> Var3;

  iVar1 = iParam0;
  while (iVar1 <= iParam1)
  {
    iVar2 = func_1422(iVar1);
    switch (iVar2)
    {
      case 73:
        iVar0 = 58;
        break;
      case 74:
        iVar0 = 59;
        break;
      default:
        break;
    }
    func_1321(iVar0, 1);
    GRAPHICS::_SET_LIGHTS_INTENSITY_FOR_ENTITY(Local_1692[iVar0 /*2*/], 2f);
    Var3 = { func_1357(iVar0) };
    ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_1692[iVar0 /*2*/], Local_218[iVar2 /*8*/], PED::GET_PED_BONE_INDEX(Local_218[iVar2 /*8*/], 0), Var3, Var3.f_3, false, false, false, false, 2, true, false, false);
    iVar1++;
  }
}