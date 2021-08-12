// act_caunc_rustling.ysc @ L13874
void func_288(var uParam0)
{
  int iVar0;

  iVar0 = 0;
  while (iVar0 < 20)
  {
    if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2[iVar0]))
    {
      EVENT::_0xBB1E41DD3D3C6250(uParam0->f_2[iVar0], "SpHerdingAnimal", 0);
    }
    iVar0++;
  }
}