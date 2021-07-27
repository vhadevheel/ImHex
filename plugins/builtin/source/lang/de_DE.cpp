#include <hex/plugin.hpp>

namespace hex::plugin::builtin {

    void registerLanguageDeDE() {
        ContentRegistry::Language::registerLanguage("German", "de-DE");

        ContentRegistry::Language::addLocalizations("de-DE", {
            /* ImHex default functionality */
                { "hex.menu.file", "Datei" },
                { "hex.menu.edit", "Bearbeiten" },
                { "hex.menu.view", "Ansicht" },
                    { "hex.menu.view.fps", "FPS anzeigen" },
                    { "hex.menu.view.demo", "ImGui Demo anzeigen" },
                { "hex.menu.help", "Hilfe" },

                { "hex.welcome.header.main", "Wilkommen zu ImHex" },
                { "hex.welcome.header.start", "Start" },
                    { "hex.welcome.start.create_file", "Neue Datei Erstellen" },
                    { "hex.welcome.start.open_file", "Datei Öffnen" },
                    { "hex.welcome.start.open_project", "Projekt Öffnen" },
                    { "hex.welcome.start.recent", "Kürzlich geöffnet" },
                { "hex.welcome.header.help", "Hilfe" },
                    { "hex.welcome.help.repo", "GitHub Repository" },
                        { "hex.welcome.help.repo.link", "https://github.com/WerWolv/ImHex" },
                    { "hex.welcome.help.gethelp", "Hilfe erhalten" },
                        { "hex.welcome.help.gethelp.link", "https://github.com/WerWolv/ImHex/discussions/categories/get-help" },
                { "hex.welcome.header.plugins", "Geladene Plugins" },
                    { "hex.welcome.plugins.plugin", "Plugin" },
                    { "hex.welcome.plugins.author", "Autor" },
                    { "hex.welcome.plugins.desc", "Beschreibung" },
                { "hex.welcome.header.customize", "Anpassen" },
                    { "hex.welcome.customize.settings.title", "Einstellungen" },
                    { "hex.welcome.customize.settings.desc", "Ändere ImHex' Einstellungen" },
                { "hex.welcome.header.update", "Updates" },
                    { "hex.welcome.update.title", "Neues Update verfügbar!" },
                    { "hex.welcome.update.desc", "ImHex {0} wurde gerade released! Downloade die neue version hier" },
                    { "hex.welcome.update.link", "https://github.com/WerWolv/ImHex/releases/latest" },
                { "hex.welcome.header.learn", "Lernen" },
                    { "hex.welcome.learn.latest.title", "Neuster Release" },
                    { "hex.welcome.learn.latest.desc", "Lies den momentanen ImHex Changelog" },
                    { "hex.welcome.learn.latest.link", "https://github.com/WerWolv/ImHex/releases/latest" },
                    { "hex.welcome.learn.pattern.title", "Pattern Language Dokumentation" },
                    { "hex.welcome.learn.pattern.desc", "Lern ImHex Patterns zu schreiben mit unserer umfangreichen Dokumentation" },
                    { "hex.welcome.learn.pattern.link", "https://github.com/WerWolv/ImHex/wiki/Pattern-Language-Guide" },
                    { "hex.welcome.learn.plugins.title", "Plugins API" },
                    { "hex.welcome.learn.plugins.desc", "Erweitere ImHex mit neuen Funktionen mit Plugins" },
                    { "hex.welcome.learn.plugins.link", "https://github.com/WerWolv/ImHex/wiki/Plugins-Development-Guide" },
                { "hex.welcome.header.various", "Verschiedenes" },

                { "hex.common.little_endian", "Little Endian" },
                { "hex.common.big_endian", "Big Endian" },
                { "hex.common.decimal", "Dezimal" },
                { "hex.common.hexadecimal", "Hexadezimal" },
                { "hex.common.octal", "Oktal" },
                { "hex.common.error", "Fehler" },
                { "hex.common.fatal", "Fataler Fehler" },
                { "hex.common.address", "Adresse" },
                { "hex.common.size", "Länge" },
                { "hex.common.region", "Region" },
                { "hex.common.match_selection", "Arbeitsbereich synchronisieren" },
                { "hex.common.yes", "Ja" },
                { "hex.common.no", "Nein" },
                { "hex.common.okay", "Okay" },
                { "hex.common.load", "Laden" },
                { "hex.common.cancel", "Abbrechen" },
                { "hex.common.set", "Setzen" },

                { "hex.view.bookmarks.name", "Lesezeichen" },
                    { "hex.view.bookmarks.default_title", "Lesezeichen [0x{0:X} - 0x{1:X}]" },
                    { "hex.view.bookmarks.no_bookmarks", "Noch kein Lesezeichen erstellt. Füge eines hinzu mit Bearbeiten -> Lesezeichen hinzufügen" },
                    { "hex.view.bookmarks.title.info", "Informationen" },
                    { "hex.view.bookmarks.address", "0x{0:X} : 0x{1:X} ({2} bytes)" },
                    { "hex.view.bookmarks.button.jump", "Springen" },
                    { "hex.view.bookmarks.button.remove", "Entfernen" },
                    { "hex.view.bookmarks.header.name", "Name" },
                    { "hex.view.bookmarks.header.color", "Farbe" },
                    { "hex.view.bookmarks.header.comment", "Kommentar" },

                { "hex.view.command_palette.name", "Befehlspalette" },

                { "hex.view.data_inspector.name", "Dateninspektor" },
                    { "hex.view.data_inspector.table.name", "Name" },
                    { "hex.view.data_inspector.table.value", "Wert" },

                { "hex.view.data_processor.name", "Datenprozessor" },
                    { "hex.view.data_processor.menu.remove_selection", "Auswahl entfernen" },
                    { "hex.view.data_processor.menu.remove_node", "Knoten entfernen" },
                    { "hex.view.data_processor.menu.remove_link", "Link entfernen" },

                { "hex.view.disassembler.name", "Disassembler" },
                    { "hex.view.disassembler.position", "Position" },
                    { "hex.view.disassembler.base", "Basisadresse" },
                    { "hex.view.disassembler.region", "Code Region" },
                    { "hex.view.disassembler.settings.header", "Einstellungen" },
                    { "hex.view.disassembler.arch", "Architektur" },
                        { "hex.view.disassembler.arm.arm", "ARM Modus" },
                        { "hex.view.disassembler.arm.thumb", "Thumb Modus" },
                        { "hex.view.disassembler.arm.default", "Standard Modus" },
                        { "hex.view.disassembler.arm.cortex_m", "Cortex-M Modus" },
                        { "hex.view.disassembler.arm.armv8", "ARMv8 Modus" },

                        { "hex.view.disassembler.mips.mips32", "MIPS32 Modus" },
                        { "hex.view.disassembler.mips.mips64", "MIPS64 Modus" },
                        { "hex.view.disassembler.mips.mips32R6", "MIPS32R6 Modus" },
                        { "hex.view.disassembler.mips.micro", "Micro Modus" },

                        { "hex.view.disassembler.x86.16bit", "16-bit Modus" },
                        { "hex.view.disassembler.x86.32bit", "32-bit Modus" },
                        { "hex.view.disassembler.x86.64bit", "64-bit Modus" },

                        { "hex.view.disassembler.ppc.32bit", "32-bit Modus" },
                        { "hex.view.disassembler.ppc.64bit", "64-bit Modus" },

                        { "hex.view.disassembler.sparc.v9", "Sparc V9 Modus" },

                    { "hex.view.disassembler.disassemble", "Disassemble" },
                    { "hex.view.disassembler.disassembling", "Disassemblen..." },
                    { "hex.view.disassembler.disassembly.title", "Disassembly" },
                        { "hex.view.disassembler.disassembly.address", "Adresse" },
                        { "hex.view.disassembler.disassembly.offset", "Offset" },
                        { "hex.view.disassembler.disassembly.bytes", "Byte" },

                { "hex.view.hashes.name", "Hashes" },
                    { "hex.view.hashes.settings", "Einstellungen" },
                    { "hex.view.hashes.function", "Hash Funktion" },
                    { "hex.view.hashes.iv", "Startwert" },
                    { "hex.view.hashes.poly", "Polynomial" },
                    { "hex.view.hashes.result", "Resultat" },

                { "hex.view.help.name", "Hilfe" },
                    { "hex.view.help.about.name", "Über ImHex" },
                        { "hex.view.help.about.translator", "Von WerWolv übersetzt" },
                        { "hex.view.help.about.source", "Quellcode auf GitHub verfügbar:" },
                        { "hex.view.help.about.donations", "Spenden" },
                        { "hex.view.help.about.thanks", "Wenn dir meine Arbeit gefällt, bitte ziehe eine Spende in Betracht, um das Projekt am Laufen zu halten. Vielen Dank <3" },
                        { "hex.view.help.about.libs", "Benutzte Libraries" },
                        { "hex.view.help.about.paths", "ImHex Ordner" },
                    { "hex.view.help.pattern_cheat_sheet", "Pattern Language Cheat Sheet"},
                    { "hex.view.help.calc_cheat_sheet", "Rechner Cheat Sheet" },

                { "hex.view.hexeditor.name", "Hex editor" },
                    { "hex.view.hexeditor.create_file", "Neu" },
                    { "hex.view.hexeditor.open_file", "Öffnen" },
                    { "hex.view.hexeditor.open_project", "Projekt öffnen" },
                    { "hex.view.hexeditor.save_project", "Projekt speichern" },
                    { "hex.view.hexeditor.save_data", "Daten speichern" },
                    { "hex.view.hexeditor.open_base64", "Base64 Datei öffnen" },
                    { "hex.view.hexeditor.load_enconding_file", "Custom encoding Datei laden" },
                    { "hex.view.hexeditor.page", "Seite {0} / {1}" },
                    { "hex.view.hexeditor.save_as", "Speichern unter" },
                    { "hex.view.hexeditor.exit_application.title", "Applikation verlassen?" },
                    { "hex.view.hexeditor.exit_application.desc", "Es wurden ungespeicherte Änderungen an diesem Projekt vorgenommen\nBist du sicher, dass du ImHex schliessen willst?" },
                    { "hex.view.hexeditor.script.title", "Datei mit Loader Skript laden" },
                    { "hex.view.hexeditor.script.desc", "Lade eine Datei mit Hilfe eines Python Skriptes" },
                    { "hex.view.hexeditor.script.script", "Skript" },
                        { "hex.view.hexeditor.script.script.title", "Loader Script: Skript öffnen" },
                    { "hex.view.hexeditor.script.file", "Datei" },
                    { "hex.view.hexeditor.script.file.title", "Loader Script: Datei öffnen" },

                    { "hex.view.hexeditor.menu.file.open_file", "Datei öffnen..." },
                    { "hex.view.hexeditor.menu.file.open_recent", "Kürzlich geöffnete Dateien"},
                    { "hex.view.hexeditor.menu.file.save", "Speichern" },
                    { "hex.view.hexeditor.menu.file.save_as", "Speichern unter..." },
                    { "hex.view.hexeditor.menu.file.close", "Schliessen" },
                    { "hex.view.hexeditor.menu.file.open_project", "Projekt öffnen..." },
                    { "hex.view.hexeditor.menu.file.save_project", "Projekt speichern..." },
                    { "hex.view.hexeditor.menu.file.load_encoding_file", "Custom encoding laden..." },
                    { "hex.view.hexeditor.menu.file.import", "Importieren..." },
                        { "hex.view.hexeditor.menu.file.import.base64", "Base64 Datei" },
                        { "hex.view.hexeditor.base64.import_error", "Datei ist nicht in einem korrekten Base64 Format!" },
                        { "hex.view.hexeditor.file_open_error", "Öffnen der Datei fehlgeschlagen!" },
                        { "hex.view.hexeditor.menu.file.import.ips", "IPS Patch" },
                        { "hex.view.hexeditor.menu.file.import.ips32", "IPS32 Patch" },
                        { "hex.view.hexeditor.menu.file.import.script", "Datei mit Loader Script" },

                    { "hex.view.hexeditor.menu.file.export", "Exportieren..." },
                        { "hex.view.hexeditor.menu.file.export.title", "Datei exportieren" },
                        { "hex.view.hexeditor.menu.file.export.ips", "IPS Patch" },
                        { "hex.view.hexeditor.menu.file.export.ips32", "IPS32 Patch" },
                    { "hex.view.hexeditor.menu.file.search", "Suchen" },
                        { "hex.view.hexeditor.search.string", "String" },
                        { "hex.view.hexeditor.search.hex", "Hex" },
                        { "hex.view.hexeditor.search.find", "Suchen" },
                        { "hex.view.hexeditor.search.find_next", "Nächstes" },
                        { "hex.view.hexeditor.search.find_prev", "Vorheriges" },
                    { "hex.view.hexeditor.menu.file.goto", "Sprung" },
                        { "hex.view.hexeditor.goto.offset.absolute", "Absolut" },
                        { "hex.view.hexeditor.goto.offset.current", "Momentan" },
                        { "hex.view.hexeditor.goto.offset.begin", "Beginn" },
                        { "hex.view.hexeditor.goto.offset.end", "Ende" },
                    { "hex.view.hexeditor.error.read_only", "Schreibzugriff konnte nicht erlangt werden. Datei wurde im Lesemodus geöffnet." },
                    { "hex.view.hexeditor.error.open", "Öffnen der Datei fehlgeschlagen!" },
                    { "hex.view.hexeditor.error.create", "Erstellen der neuen Datei fehlgeschlagen!" },
                    { "hex.view.hexeditor.menu.edit.undo", "Rückgängig" },
                    { "hex.view.hexeditor.menu.edit.redo", "Wiederholen" },
                    { "hex.view.hexeditor.menu.edit.copy", "Kopieren" },
                    { "hex.view.hexeditor.menu.edit.copy_as", "Kopieren als..." },
                        { "hex.view.hexeditor.copy.hex", "String" },
                        { "hex.view.hexeditor.copy.c", "C Array" },
                        { "hex.view.hexeditor.copy.cpp", "C++ Array" },
                        { "hex.view.hexeditor.copy.csharp", "C# Array" },
                        { "hex.view.hexeditor.copy.rust", "Rust Array" },
                        { "hex.view.hexeditor.copy.python", "Python Array" },
                        { "hex.view.hexeditor.copy.java", "Java Array" },
                        { "hex.view.hexeditor.copy.js", "JavaScript Array" },
                        { "hex.view.hexeditor.copy.ascii", "ASCII Art" },
                        { "hex.view.hexeditor.copy.html", "HTML" },
                    { "hex.view.hexeditor.menu.edit.paste", "Einfügen" },
                    { "hex.view.hexeditor.menu.edit.bookmark", "Lesezeichen erstellen" },
                    { "hex.view.hexeditor.menu.edit.set_base", "Basisadresse setzen" },
                    { "hex.view.hexeditor.menu.edit.resize", "Grösse ändern" },

                { "hex.view.information.name", "Dateninformationen" },
                    { "hex.view.information.control", "Einstellungen" },
                    { "hex.view.information.analyze", "Seite analysieren" },
                    { "hex.view.information.analyzing", "Analysieren..." },
                    { "hex.view.information.region", "Analysierte Region" },
                    { "hex.view.information.magic", "Magic Informationen" },
                    { "hex.view.information.description", "Beschreibung:" },
                    { "hex.view.information.mime", "MIME Typ:" },
                    { "hex.view.information.info_analysis", "Informationsanalysis" },
                    { "hex.view.information.distribution", "Byte Verteilung" },
                    { "hex.view.information.entropy", "Entropie" },
                    { "hex.view.information.block_size", "Blockgrösse" },
                    { "hex.view.information.block_size.desc", "{0} Blöcke min {1} bytes" },
                    { "hex.view.information.file_entropy", "Dateientropie" },
                    { "hex.view.information.highest_entropy", "Höchste Blockentropie" },
                    { "hex.view.information.encrypted", "Diese Daten sind vermutlich verschlüsselt oder komprimiert!" },

                { "hex.view.patches.name", "Patches" },
                    { "hex.view.patches.offset", "Offset" },
                    { "hex.view.patches.orig", "Originalwert" },
                    { "hex.view.patches.patch", "Patchwert"},
                    { "hex.view.patches.remove", "Patch entfernen" },

                { "hex.view.pattern.name", "Pattern Editor" },
                { "hex.view.pattern.accept_pattern", "Pattern akzeptieren" },
                    { "hex.view.pattern.accept_pattern.desc", "Ein oder mehrere kompatible Pattern wurden für diesen Dateityp gefunden" },
                    { "hex.view.pattern.accept_pattern.patterns", "Pattern" },
                    { "hex.view.pattern.accept_pattern.question", "Ausgewähltes Pattern anwenden?" },
                { "hex.view.pattern.menu.file.load_pattern", "Pattern laden..." },
                { "hex.view.pattern.open_pattern", "Pattern öffnen" },
                { "hex.view.pattern.evaluating", "Evaluieren..." },
                { "hex.view.pattern.auto", "Auto evaluieren" },

                { "hex.view.pattern_data.name", "Pattern Daten" },
                    { "hex.view.pattern_data.name", "Name" },
                    { "hex.view.pattern_data.color", "Farbe" },
                    { "hex.view.pattern_data.offset", "Offset" },
                    { "hex.view.pattern_data.size", "Grösse" },
                    { "hex.view.pattern_data.type", "Typ" },
                    { "hex.view.pattern_data.value", "Wert" },

                { "hex.view.settings.name", "Einstellungen" },

                { "hex.view.strings.name", "Strings" },
                    { "hex.view.strings.copy", "String kopieren" },
                    { "hex.view.strings.demangle", "Demangle" },
                    { "hex.view.strings.min_length", "Minimallänge" },
                    { "hex.view.strings.filter", "Filter" },
                    { "hex.view.strings.extract", "Extrahieren" },
                    { "hex.view.strings.searching", "Suchen..." },
                    { "hex.view.strings.offset", "Offset" },
                    { "hex.view.strings.size", "Grösse" },
                    { "hex.view.strings.string", "String" },
                    { "hex.view.strings.demangle.title", "Demangled Namen" },
                    { "hex.view.strings.demangle.copy", "Kopieren" },

                { "hex.view.tools.name", "Werkzeuge" },

                { "hex.view.yara.name", "Yara Regeln" },
                    { "hex.view.yara.header.rules", "Regeln" },
                        { "hex.view.yara.reload", "Neu laden" },
                        { "hex.view.yara.match", "Regeln anwenden" },
                        { "hex.view.yara.matching", "Anwenden..." },
                        { "hex.view.yara.error", "Yara Kompilerfehler: " },
                    { "hex.view.yara.header.matches", "Funde" },
                        { "hex.view.yara.matches.identifier", "Kennung" },
                        { "hex.view.yara.whole_data", "Gesammte Daten Übereinstimmung!" },
                        { "hex.view.yara.no_rules", "Keine Yara Regeln gefunden. Platziere sie in ImHex' 'yara' Ordner" },

                { "hex.view.constants.name", "Konstanten" },

            /* Builtin plugin features */

                { "hex.builtin.command.calc.desc", "Rechner" },
                { "hex.builtin.command.web.desc", "Webseite nachschlagen" },
                { "hex.builtin.command.web.result", "'{0}' nachschlagen"},

                { "hex.builtin.inspector.binary", "Binär (8 bit)" },
                { "hex.builtin.inspector.u8", "uint8_t" },
                { "hex.builtin.inspector.s8", "int8_t" },
                { "hex.builtin.inspector.u16", "uint16_t" },
                { "hex.builtin.inspector.s16", "int16_t" },
                { "hex.builtin.inspector.u32", "uint32_t" },
                { "hex.builtin.inspector.s32", "int32_t" },
                { "hex.builtin.inspector.u64", "uint64_t" },
                { "hex.builtin.inspector.s64", "int64_t" },
                { "hex.builtin.inspector.float", "float (32 bit)" },
                { "hex.builtin.inspector.double", "double (64 bit)" },
                { "hex.builtin.inspector.ascii", "ASCII Zeichen" },
                { "hex.builtin.inspector.wide", "Wide Zeichen" },
                { "hex.builtin.inspector.utf8", "UTF-8 code point" },
                { "hex.builtin.inspector.time32", "__time32_t" },
                { "hex.builtin.inspector.time64", "__time64_t" },
                { "hex.builtin.inspector.time", "time_t" },
                { "hex.builtin.inspector.guid", "GUID" },
                { "hex.builtin.inspector.rgba8", "RGBA8 Farbe" },

                { "hex.builtin.nodes.constants", "Konstanten" },
                    { "hex.builtin.nodes.constants.int", "Integral" },
                        { "hex.builtin.nodes.constants.int.header", "Integral" },
                        { "hex.builtin.nodes.constants.int.output", "" },
                    { "hex.builtin.nodes.constants.float", "Kommazahl" },
                        { "hex.builtin.nodes.constants.float.header", "Kommazahl" },
                        { "hex.builtin.nodes.constants.float.output", "" },
                    { "hex.builtin.nodes.constants.nullptr", "Nullptr" },
                        { "hex.builtin.nodes.constants.nullptr.header", "Nullptr" },
                        { "hex.builtin.nodes.constants.nullptr.output", "" },
                    { "hex.builtin.nodes.constants.buffer", "Buffer" },
                        { "hex.builtin.nodes.constants.buffer.header", "Buffer" },
                        { "hex.builtin.nodes.constants.buffer.size", "Size" },
                        { "hex.builtin.nodes.constants.buffer.output", "" },
                    { "hex.builtin.nodes.constants.string", "String" },
                        { "hex.builtin.nodes.constants.string.header", "String" },
                        { "hex.builtin.nodes.constants.string.output", "" },
                    { "hex.builtin.nodes.constants.rgba8", "RGBA8 Farbe" },
                        { "hex.builtin.nodes.constants.rgba8.header", "RGBA8 Farbe" },
                        { "hex.builtin.nodes.constants.rgba8.output.r", "Rot" },
                        { "hex.builtin.nodes.constants.rgba8.output.g", "Grün" },
                        { "hex.builtin.nodes.constants.rgba8.output.b", "Blau" },
                        { "hex.builtin.nodes.constants.rgba8.output.a", "Alpha" },
                    { "hex.builtin.nodes.constants.comment", "Kommentar" },
                        { "hex.builtin.nodes.constants.comment.header", "Kommentar" },

                { "hex.builtin.nodes.display", "Anzeigen" },
                    { "hex.builtin.nodes.display.int", "Integral" },
                        { "hex.builtin.nodes.display.int.header", "Integral Anzeige" },
                        { "hex.builtin.nodes.display.int.input", "Wert" },
                    { "hex.builtin.nodes.display.float", "Kommazahl" },
                        { "hex.builtin.nodes.display.float.header", "Kommazahl Anzeige" },
                        { "hex.builtin.nodes.display.float.input", "Wert" },

                { "hex.builtin.nodes.data_access", "Datenzugriff" },
                    { "hex.builtin.nodes.data_access.read", "Lesen" },
                        { "hex.builtin.nodes.data_access.read.header", "Lesen" },
                        { "hex.builtin.nodes.data_access.read.address", "Adresse" },
                        { "hex.builtin.nodes.data_access.read.size", "Grösse" },
                        { "hex.builtin.nodes.data_access.read.data", "Daten" },
                    { "hex.builtin.nodes.data_access.write", "Schreiben" },
                        { "hex.builtin.nodes.data_access.write.header", "Schreiben" },
                        { "hex.builtin.nodes.data_access.write.address", "Adresse" },
                        { "hex.builtin.nodes.data_access.write.data", "Daten" },
                    { "hex.builtin.nodes.data_access.size", "Datengrösse"},
                        { "hex.builtin.nodes.data_access.size.header", "Datengrösse"},
                        { "hex.builtin.nodes.data_access.size.size", "Grösse"},

                { "hex.builtin.nodes.casting", "Datenumwandlung" },
                    { "hex.builtin.nodes.casting.int_to_buffer", "Integral zu Buffer" },
                        { "hex.builtin.nodes.casting.int_to_buffer.header", "Integral zu Buffer" },
                        { "hex.builtin.nodes.casting.int_to_buffer.input", "In" },
                        { "hex.builtin.nodes.casting.int_to_buffer.output", "Out" },
                { "hex.builtin.nodes.casting.buffer_to_int", "Buffer zu Integral" },
                        { "hex.builtin.nodes.casting.buffer_to_int.header", "Buffer zu Integral" },
                        { "hex.builtin.nodes.casting.buffer_to_int.input", "In" },
                        { "hex.builtin.nodes.casting.buffer_to_int.output", "Out" },

                { "hex.builtin.nodes.arithmetic", "Arithmetisch" },
                    { "hex.builtin.nodes.arithmetic.add", "Addition" },
                        { "hex.builtin.nodes.arithmetic.add.header", "Plus" },
                        { "hex.builtin.nodes.arithmetic.add.input.a", "Input A" },
                        { "hex.builtin.nodes.arithmetic.add.input.b", "Input B" },
                        { "hex.builtin.nodes.arithmetic.add.output", "Output" },
                    { "hex.builtin.nodes.arithmetic.sub", "Subtraktion" },
                        { "hex.builtin.nodes.arithmetic.sub.header", "Minus" },
                        { "hex.builtin.nodes.arithmetic.sub.input.a", "Input A" },
                        { "hex.builtin.nodes.arithmetic.sub.input.b", "Input B" },
                        { "hex.builtin.nodes.arithmetic.sub.output", "Output" },
                    { "hex.builtin.nodes.arithmetic.mul", "Multiplikation" },
                        { "hex.builtin.nodes.arithmetic.mul.header", "Mal" },
                        { "hex.builtin.nodes.arithmetic.mul.input.a", "Input A" },
                        { "hex.builtin.nodes.arithmetic.mul.input.b", "Input B" },
                        { "hex.builtin.nodes.arithmetic.mul.output", "Output" },
                    { "hex.builtin.nodes.arithmetic.div", "Division" },
                        { "hex.builtin.nodes.arithmetic.div.header", "Durch" },
                        { "hex.builtin.nodes.arithmetic.div.input.a", "Input A" },
                        { "hex.builtin.nodes.arithmetic.div.input.b", "Input B" },
                        { "hex.builtin.nodes.arithmetic.div.output", "Output" },
                    { "hex.builtin.nodes.arithmetic.mod", "Modulus" },
                        { "hex.builtin.nodes.arithmetic.mod.header", "Modulo" },
                        { "hex.builtin.nodes.arithmetic.mod.input.a", "Input A" },
                        { "hex.builtin.nodes.arithmetic.mod.input.b", "Input B" },
                        { "hex.builtin.nodes.arithmetic.mod.output", "Output" },

                { "hex.builtin.nodes.buffer", "Buffer" },
                    { "hex.builtin.nodes.buffer.combine", "Kombinieren" },
                        { "hex.builtin.nodes.buffer.combine.header", "Buffer kombinieren" },
                        { "hex.builtin.nodes.buffer.combine.input.a", "Input A" },
                        { "hex.builtin.nodes.buffer.combine.input.b", "Input B" },
                        { "hex.builtin.nodes.buffer.combine.output", "Output" },
                    { "hex.builtin.nodes.buffer.slice", "Zerschneiden" },
                        { "hex.builtin.nodes.buffer.slice.header", "Buffer zerschneiden" },
                        { "hex.builtin.nodes.buffer.slice.input.buffer", "Input" },
                        { "hex.builtin.nodes.buffer.slice.input.from", "Von" },
                        { "hex.builtin.nodes.buffer.slice.input.to", "Bis" },
                        { "hex.builtin.nodes.buffer.slice.output", "Output" },
                    { "hex.builtin.nodes.buffer.repeat", "Wiederholen" },
                        { "hex.builtin.nodes.buffer.repeat.header", "Buffer wiederholen" },
                        { "hex.builtin.nodes.buffer.repeat.input.buffer", "Input" },
                        { "hex.builtin.nodes.buffer.repeat.input.count", "Anzahl" },
                        { "hex.builtin.nodes.buffer.repeat.output", "Output" },

                { "hex.builtin.nodes.control_flow", "Kontrollfluss" },
                    { "hex.builtin.nodes.control_flow.if", "If" },
                        { "hex.builtin.nodes.control_flow.if.header", "If" },
                        { "hex.builtin.nodes.control_flow.if.condition", "Bedingung" },
                        { "hex.builtin.nodes.control_flow.if.true", "Wahr" },
                        { "hex.builtin.nodes.control_flow.if.false", "Falsch" },
                        { "hex.builtin.nodes.control_flow.if.output", "Output" },
                    { "hex.builtin.nodes.control_flow.equals", "Gleich" },
                        { "hex.builtin.nodes.control_flow.equals.header", "Gleich" },
                        { "hex.builtin.nodes.control_flow.equals.input.a", "Input A" },
                        { "hex.builtin.nodes.control_flow.equals.input.b", "Input B" },
                        { "hex.builtin.nodes.control_flow.equals.output", "Output" },
                    { "hex.builtin.nodes.control_flow.not", "Nicht" },
                        { "hex.builtin.nodes.control_flow.not.header", "Nicht" },
                        { "hex.builtin.nodes.control_flow.not.input", "Input" },
                        { "hex.builtin.nodes.control_flow.not.output", "Output" },
                    { "hex.builtin.nodes.control_flow.gt", "Grösser als" },
                        { "hex.builtin.nodes.control_flow.gt.header", "Grösser als" },
                        { "hex.builtin.nodes.control_flow.gt.input.a", "Input A" },
                        { "hex.builtin.nodes.control_flow.gt.input.b", "Input B" },
                        { "hex.builtin.nodes.control_flow.gt.output", "Output" },
                    { "hex.builtin.nodes.control_flow.lt", "Kleiner als" },
                        { "hex.builtin.nodes.control_flow.lt.header", "Kleiner als" },
                        { "hex.builtin.nodes.control_flow.lt.input.a", "Input A" },
                        { "hex.builtin.nodes.control_flow.lt.input.b", "Input B" },
                        { "hex.builtin.nodes.control_flow.lt.output", "Output" },
                    { "hex.builtin.nodes.control_flow.and", "UND" },
                        { "hex.builtin.nodes.control_flow.and.header", "Bool'sches UND" },
                        { "hex.builtin.nodes.control_flow.and.input.a", "Input A" },
                        { "hex.builtin.nodes.control_flow.and.input.b", "Input B" },
                        { "hex.builtin.nodes.control_flow.and.output", "Output" },
                    { "hex.builtin.nodes.control_flow.or", "ODER" },
                        { "hex.builtin.nodes.control_flow.or.header", "Bool'sches ODER" },
                        { "hex.builtin.nodes.control_flow.or.input.a", "Input A" },
                        { "hex.builtin.nodes.control_flow.or.input.b", "Input B" },
                        { "hex.builtin.nodes.control_flow.or.output", "Output" },

                { "hex.builtin.nodes.bitwise", "Bitweise Operationen" },
                    { "hex.builtin.nodes.bitwise.and", "UND" },
                        { "hex.builtin.nodes.bitwise.and.header", "Bitweise UND" },
                        { "hex.builtin.nodes.bitwise.and.input.a", "Input A" },
                        { "hex.builtin.nodes.bitwise.and.input.b", "Input B" },
                        { "hex.builtin.nodes.bitwise.and.output", "Output" },
                    { "hex.builtin.nodes.bitwise.or", "ODER" },
                        { "hex.builtin.nodes.bitwise.or.header", "Bitweise ODER" },
                        { "hex.builtin.nodes.bitwise.or.input.a", "Input A" },
                        { "hex.builtin.nodes.bitwise.or.input.b", "Input B" },
                        { "hex.builtin.nodes.bitwise.or.output", "Output" },
                    { "hex.builtin.nodes.bitwise.xor", "Exklusiv ODER" },
                        { "hex.builtin.nodes.bitwise.xor.header", "Bitweise Exklusiv ODER" },
                        { "hex.builtin.nodes.bitwise.xor.input.a", "Input A" },
                        { "hex.builtin.nodes.bitwise.xor.input.b", "Input B" },
                        { "hex.builtin.nodes.bitwise.xor.output", "Output" },
                    { "hex.builtin.nodes.bitwise.not", "Nicht" },
                        { "hex.builtin.nodes.bitwise.not.header", "Bitweise Nicht" },
                        { "hex.builtin.nodes.bitwise.not.input", "Input" },
                        { "hex.builtin.nodes.bitwise.not.output", "Output" },

                { "hex.builtin.nodes.decoding", "Dekodieren" },
                    { "hex.builtin.nodes.decoding.base64", "Base64" },
                        { "hex.builtin.nodes.decoding.base64.header", "Base64 Dekodierer" },
                        { "hex.builtin.nodes.decoding.base64.input", "In" },
                        { "hex.builtin.nodes.decoding.base64.output", "Out" },
                    { "hex.builtin.nodes.decoding.hex", "Hexadezimal" },
                        { "hex.builtin.nodes.decoding.hex.header", "Hexadezimal Dekodierer" },
                        { "hex.builtin.nodes.decoding.hex.input", "In" },
                        { "hex.builtin.nodes.decoding.hex.output", "Out" },

                { "hex.builtin.nodes.crypto", "Kryptographie" },
                    { "hex.builtin.nodes.crypto.aes", "AES Dekryptor" },
                        { "hex.builtin.nodes.crypto.aes.header", "AES Dekryptor" },
                        { "hex.builtin.nodes.crypto.aes.key", "Schlüssel" },
                        { "hex.builtin.nodes.crypto.aes.iv", "IV" },
                        { "hex.builtin.nodes.crypto.aes.nonce", "Nonce" },
                        { "hex.builtin.nodes.crypto.aes.input", "Input" },
                        { "hex.builtin.nodes.crypto.aes.output", "Output" },
                        { "hex.builtin.nodes.crypto.aes.mode", "Modus" },
                        { "hex.builtin.nodes.crypto.aes.key_length", "Schlüssellänge" },



                { "hex.builtin.tools.demangler", "Itanium/MSVC demangler" },
                    { "hex.builtin.tools.demangler.mangled", "Mangled Namen" },
                    { "hex.builtin.tools.demangler.demangled", "Demangled Namen" },
                { "hex.builtin.tools.ascii_table", "ASCII Tabelle" },
                    { "hex.builtin.tools.ascii_table.octal", "Oktal anzeigen" },
                { "hex.builtin.tools.regex_replacer", "Regex Ersetzer" },
                    { "hex.builtin.tools.regex_replacer.pattern", "Regex pattern" },
                    { "hex.builtin.tools.regex_replacer.replace", "Ersatz pattern" },
                    { "hex.builtin.tools.regex_replacer.input", "Input" },
                    { "hex.builtin.tools.regex_replacer.output", "Output" },
                { "hex.builtin.tools.color", "Farbwähler" },
                { "hex.builtin.tools.calc", "Rechner" },
                    { "hex.builtin.tools.input", "Input" },
                    { "hex.builtin.tools.format.standard", "Standard" },
                    { "hex.builtin.tools.format.scientific", "Wissenschaftlich" },
                    { "hex.builtin.tools.format.engineering", "Ingenieur" },
                    { "hex.builtin.tools.format.programmer", "Programmierer" },
                    { "hex.builtin.tools.error", "Letzter Fehler: '{0}'" },
                    { "hex.builtin.tools.history", "Geschichte" },
                    { "hex.builtin.tools.name", "Name" },
                    { "hex.builtin.tools.value", "Wert" },
                { "hex.builtin.tools.base_converter", "Basiskonverter" },
                    { "hex.builtin.tools.base_converter.dec", "DEC" },
                    { "hex.builtin.tools.base_converter.hex", "HEX" },
                    { "hex.builtin.tools.base_converter.oct", "OCT" },
                    { "hex.builtin.tools.base_converter.bin", "BIN" },
                { "hex.builtin.tools.permissions", "UNIX Berechtigungsrechner" },
                    { "hex.builtin.tools.permissions.perm_bits", "Berechtigungs bits" },
                    { "hex.builtin.tools.permissions.absolute", "Absolute Notation" },
                    { "hex.builtin.tools.permissions.setuid_error", "User benötigt execute Rechte, damit setuid bit gilt!" },
                    { "hex.builtin.tools.permissions.setgid_error", "Group benötigt execute Rechte, damit setgid bit gilt!" },
                    { "hex.builtin.tools.permissions.sticky_error", "Other benötigt execute Rechte, damit sticky bit gilt!" },

                { "hex.builtin.setting.imhex", "ImHex" },
                    { "hex.builtin.setting.imhex.recent_files", "Kürzlich geöffnete Dateien" },
                { "hex.builtin.setting.interface", "Aussehen" },
                    { "hex.builtin.setting.interface.color", "Farbthema" },
                        { "hex.builtin.setting.interface.color.dark", "Dunkel" },
                        { "hex.builtin.setting.interface.color.light", "Hell" },
                        { "hex.builtin.setting.interface.color.classic", "Klassisch" },
                    { "hex.builtin.setting.interface.language", "Sprache" },
                    { "hex.builtin.setting.interface.fps", "FPS Limite" },
                    { "hex.builtin.setting.interface.highlight_alpha", "Markierungssichtbarkeit" },

                { "hex.builtin.provider.file.path", "Dateipfad" },
                { "hex.builtin.provider.file.size", "Größe" },
                { "hex.builtin.provider.file.creation", "Erstellungszeit" },
                { "hex.builtin.provider.file.access", "Letzte Zugriffszeit" },
                { "hex.builtin.provider.file.modification", "Letzte Modifikationszeit" },
        });
    }

}