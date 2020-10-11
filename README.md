A mod by https://github.com/bolaurom & https://github.com/ErZZoiN

# Description 
We have noticed a bug that might appear on relatively huge map ( i.e. +/- 15Mo, or roughly +500 000 items placed ).

The bug makes the game directly crash when looking in certain directions, and output the following error :

Version: 131382, IsEditor: No, IsPerforceBuild: No, BuildConfiguration: Shipping, Launcher: Epic, NetMode: Listen Server, IsUsingMods: No

Assertion failed: Index < SizeX * SizeY [File:D:\ws\SB-200518130817-657\UE4\Engine\Source\Runtime\Renderer\Private\SceneOcclusion.cpp] [Line: 713]

FactoryGame_Win64_Shipping!FWindowsErrorOutputDevice::Serialize() [d:\ws\sb-200518130817-657\ue4\engine\source\runtime\core\private\windows\windowserroroutputdevice.cpp:79] FactoryGame_Win64_Shipping!FOutputDevice::LogfImpl() [d:\ws\sb-200518130817-657\ue4\engine\source\runtime\core\private\misc\outputdevice.cpp:71] FactoryGame_Win64_Shipping!AssertFailedImplV() [d:\ws\sb-200518130817-657\ue4\engine\source\runtime\core\private\misc\assertionmacros.cpp:101]

The relevant line here being " Assertion failed .... "

This mod exists only to fix that error, and provide no other functionalities. It should only be used by users experiencing the exact same error as described earlier.

A quick explanation of the inner workings of the mod was given there : https://questions.satisfactorygame.com/post/5f79d0da6f3c82fe950be5d4

mod specific code is located in /Source/SceneOcclusionBugRemover/

# SatisfactoryModLoader [![Build Status](https://ci.ficsit.app/job/SML2/job/master/badge/icon)](https://ci.ficsit.app/job/SML2/job/master/)
A tool used to load mods for the game Satisfactory. It's under development until Coffee Stain releases a proper Unreal modding API.

# Discord Server
Join our [discord server](https://discord.gg/QzcG9nX) to talk about SML and Satisfactory Modding in general.

# DISCLAIMER
This software is provided by the author "as is". In no event shall the author be liable for any direct, indirect, incidental, special, exemplary, or consequential damages (including, but not limited to procurement of substitute goods or services; loss of use, data, or profits; or business interruption) however caused and on any 
theory of liability, whether in contract, strict liability, or tort (including negligence or otherwise) arising in any way out of the use of this software, even if advised of the possibility of such damage.
